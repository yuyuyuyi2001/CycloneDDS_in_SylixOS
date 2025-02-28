/*
 * Copyright(c) 2006 to 2020 ZettaScale Technology and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#ifndef CONFIG_ENV_H
#define CONFIG_ENV_H

#include "dds/features.h"

#define FILE_PATH_SEP             "/"
#define COMMON_ETC_DIR            "D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/src/security/core/tests/common/etc"
#define PLUGIN_WRAPPER_LIB_DIR    "D:/MSYS2/download/SylixOS_cyclonedds/cyclonedds/sylixOS_ddsc/src/security/core/tests"
#define PLUGIN_WRAPPER_LIB_PREFIX "lib"
#define PLUGIN_WRAPPER_LIB_SUFFIX ".so"

// Statically linked plugins don't do path names
#ifdef DDS_IS_STATIC_LIBRARY
#define WRAPPERLIB_PATH(name) name
#else
#define WRAPPERLIB_PATH(name) \
  PLUGIN_WRAPPER_LIB_DIR FILE_PATH_SEP PLUGIN_WRAPPER_LIB_PREFIX name PLUGIN_WRAPPER_LIB_SUFFIX
#endif

#define COMMON_ETC_PATH(name) \
  COMMON_ETC_DIR FILE_PATH_SEP name

#endif /* CONFIG_ENV_H */
