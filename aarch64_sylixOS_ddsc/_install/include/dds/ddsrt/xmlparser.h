// Copyright(c) 2006 to 2020 ZettaScale Technology and others
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License v. 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
// v. 1.0 which is available at
// http://www.eclipse.org/org/documents/edl-v10.php.
//
// SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause

#ifndef DDSRT_XMLPARSER_H
#define DDSRT_XMLPARSER_H

#include <stdio.h>
#include <stdint.h>

#include "dds/export.h"

#if defined (__cplusplus)
extern "C" {
#endif

/** @file xmlparser.h
 *
 * This is provides a parser for an XML-like language (close enough to a subset of XML to
 * treat it as XML).
 *
 * It is configured with a set of callbacks for handling elements and attributes, to be
 * called at appropriate times during parsing.  Each of these can return a negative value
 * to signal an error. A separate callback exists for reporting syntactic errors.
 *
 * The parser carries an arbitrary state pointer around that is passed as the first
 * argument to all callback functions.  It also allows the element open function to
 * associate it with an arbitrary `uintptr_t` that is passed to all other callbacks
 * related to the same element (so attributes, data), and also as the `parentinfo` to the
 * element open callbacks for any children.
 */

/** @brief Type of callback function for processing an element open tag
 *
 * @param[in] varg arbitrary object pointer for tracking state during parsing
 * @param[in] parentinfo is 0 for the root element, otherwise the value stored into `*eleminfo` by the element open callback for the parent
 * @param[out] eleminfo arbitrary value passed to all other callbacks related to this element
 * @param[in] name name of the element (i.e., "abc" in `<abc def="ghi">jkl</abc>`)
 * @param[in] line line number at which the token starts
 *
 * @return < 0 on failure, >= 0 on success
 */
typedef int (*ddsrt_xmlp_proc_elem_open_t) (void *varg, uintptr_t parentinfo, uintptr_t *eleminfo, const char *name, int line);

/** @brief Type of callback function for processing an attribute
 *
 * @param[in] varg arbitrary object pointer for tracking state during parsing
 * @param[in] eleminfo whatever was stored in `*eleminfo` by the element open tag callback
 * @param[in] name name of the attribute (i.e., "def" in the above`)
 * @param[in] value value of the attribute (i.e., "ghi" in the above)
 * @param[in] line line number at which the token starts
 *
 * @return < 0 on failure, >= 0 on success
 */
typedef int (*ddsrt_xmlp_proc_attr_t) (void *varg, uintptr_t eleminfo, const char *name, const char *value, int line);

/** @brief Type of callback function for processing the element body
 *
 * @param[in] varg arbitrary object pointer for tracking state during parsing
 * @param[in] eleminfo whatever was stored in `*eleminfo` by the element open tag callback
 * @param[in] data element body text (i.e., "jkl" in the above)
 * @param[in] line line number at which body token starts
 *
 * @return < 0 on failure, >= 0 on success
 */
typedef int (*ddsrt_xmlp_proc_elem_data_t) (void *varg, uintptr_t eleminfo, const char *data, int line);

/** @brief Type of callback function for processing the element close tag
 *
 * @param[in] varg arbitrary object pointer for tracking state during parsing
 * @param[in] eleminfo whatever was stored in `*eleminfo` by the element open tag callback
 * @param[in] line line number at which element close token starts
 *
 * @return < 0 on failure, >= 0 on success
 */
typedef int (*ddsrt_xmlp_proc_elem_close_t) (void *varg, uintptr_t eleminfo, int line);

/** @brief Type of callback function for reporting a syntactic error
 *
 * @param[in] varg arbitrary object pointer for tracking state during parsing
 * @param[in] msg error message generated by the parser
 * @param[in] line line number at which the error was detected
 */
typedef void (*ddsrt_xmlp_error) (void *varg, const char *msg, int line);

/** Struct defining the callbacks, see the type definitions for information */
struct ddsrt_xmlp_callbacks {
  ddsrt_xmlp_proc_elem_open_t elem_open;
  ddsrt_xmlp_proc_attr_t attr;
  ddsrt_xmlp_proc_elem_data_t elem_data;
  ddsrt_xmlp_proc_elem_close_t elem_close;
  ddsrt_xmlp_error error;
};

/** Opaque parser state */
struct ddsrt_xmlp_state;

/** Parser option: if not set, junk may follow top-level closing tag. Set by default. */
#define DDSRT_XMLP_REQUIRE_EOF          1u

/** Parser option: if set allow closing an element with </> instead of </name>. Clear by default. */
#define DDSRT_XMLP_ANONYMOUS_CLOSE_TAG  2u

/** Parser option: if set, treat missing close tag as EOF and synthesise any missing close tags. Clear by default. */
#define DDSRT_XMLP_MISSING_CLOSE_AS_EOF 4u

/** @brief Construct a new XML parser for a file
 *
 * @param[in] fp file to read from, cached in returned `ddsrt_xmlp_state` state object
 * @param[in] varg argument pointer to passed to all callback functions
 * @param[in] cb callbacks for interpreting the contents of the file, functions pointers may be 0
 *
 * @return a newly allocated state object with default options
 */
DDS_EXPORT struct ddsrt_xmlp_state *ddsrt_xmlp_new_file (FILE *fp, void *varg, const struct ddsrt_xmlp_callbacks *cb);

/** @brief Construct a new XML parser taking a string as input
 *
 * @param[in] string string to read from, cached in returned `ddsrt_xmlp_state` state object
 * @param[in] varg argument pointer to passed to all callback functions
 * @param[in] cb callbacks for interpreting the contents of the file, functions pointers may be 0
 *
 * @return a newly allocated state object with default options
 */
DDS_EXPORT struct ddsrt_xmlp_state *ddsrt_xmlp_new_string (const char *string, void *varg, const struct ddsrt_xmlp_callbacks *cb);

/** @brief Modify the options of a XML parser state object
 *
 * @param[in] st state object obtained from @ref ddsrt_xmlp_new_file or @ref ddsrt_xmlp_new_string
 * @param[in] options bitwise or of desired options
 */
DDS_EXPORT void ddsrt_xmlp_set_options (struct ddsrt_xmlp_state *st, uint32_t options);

/** @brief Get the current buffer position
 *
 * @note While there is a "current buffer position" in all cases, it is meaningless when reading from a file.
 *
 * @param[in] st state object obtained from @ref ddsrt_xmlp_new_file or @ref ddsrt_xmlp_new_string
 * @return When parsing a string, the offset in the input string
 */
DDS_EXPORT size_t ddsrt_xmlp_get_bufpos (const struct ddsrt_xmlp_state *st);

/** @brief Free the XML parser state object
 *
 * @param[in] st state object obtained from @ref ddsrt_xmlp_new_file or @ref ddsrt_xmlp_new_string
 */
DDS_EXPORT void ddsrt_xmlp_free (struct ddsrt_xmlp_state *st);

/** @brief Parse an XML file or string
 *
 * This calls the callbacks specified when creating the parser for interpretation of the contents.
 *
 * @param[in] st state object obtained from @ref ddsrt_xmlp_new_file or @ref ddsrt_xmlp_new_string
 *
 * @return The result of the last call to the element close callback, or -1 on syntax error.
 */
DDS_EXPORT int ddsrt_xmlp_parse (struct ddsrt_xmlp_state *st);

#if defined (__cplusplus)
}
#endif

#endif
