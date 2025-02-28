/*
 * Copyright(c) 2006 to 2019 ZettaScale Technology and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EX_USAGE (64)
#define EX_SOFTWARE (70)

#include <CUnit/Basic.h>
#include <CUnit/Automated.h>
#include "CUnit/Test.h"

static struct {
    bool print_help;
    CU_ErrorAction error_action;
    const char *suite;
    const char *test;
} opts = {
    false,
    CUEA_FAIL,
    "*",
    "*"
};

static int patmatch(const char *pat, const char *str)
{
    while (*pat) {
        if (*pat == '?') {
            /* any character will do */
            if (*str++ == 0) {
                return 0;
            }
            pat++;
        } else if (*pat == '*') {
            /* collapse a sequence of wildcards, requiring as many
               characters in str as there are ?s in the sequence */
            while (*pat == '*' || *pat == '?') {
                if (*pat == '?' && *str++ == 0) {
                    return 0;
                }
                pat++;
            }
            /* try matching on all positions where str matches pat */
            while (*str) {
                if (*str == *pat && patmatch(pat+1, str+1)) {
                    return 1;
                }
                str++;
            }
            return *pat == 0;
        } else {
            /* only an exact match */
            if (*str++ != *pat++) {
                return 0;
            }
        }
    }

    return *str == 0;
}

static void usage(const char *name)
{
    fprintf(stderr, "Usage: %s OPTIONS\n", name);
    fprintf(stderr, "Try '%s -h' for more information\n", name);
}

static void help(const char *name)
{
    printf("Usage: %s [OPTIONS]\n", name);
    printf("\n");
    printf("Possible options:\n");
    printf("  -f           fail fast: abort on failed fatal assert\n");
    printf("  -h           display this help and exit\n");
    printf("  -s PATTERN   run only tests in suites matching pattern\n");
    printf("  -t PATTERN   run only test matching pattern\n");
    printf("\n");
    printf("Exit codes:\n");
    printf("  %-2d  Successful termination\n", EXIT_SUCCESS);
    printf("  %-2d  One or more failing test cases\n", EXIT_FAILURE);
    printf("  %-2d  Command line usage error\n", EX_USAGE);
    printf("  %-2d  Internal software error\n", EX_SOFTWARE);
}

static int parse_options(int argc, char *argv[])
{
    int err = 0;

    for (int i = 1; err == 0 && i < argc; i++) {
        switch ((argv[i][0] == '-') ? argv[i][1] : 0) {
            case 'h':
                opts.print_help = true;
                break;
            case 'f':
                opts.error_action = CUEA_ABORT;
                break;
            case 's':
                if ((i+1) < argc) {
                    opts.suite = argv[++i];
                    break;
                }
                /* FALLS THROUGH */
            case 't':
                if ((i+1) < argc) {
                    opts.test = argv[++i];
                    break;
                }
                /* FALLS THROUGH */
            default:
                err = 1;
                break;
        }
    }

    return err;
}

static void
add_suite(
    const char *suite,
    CU_InitializeFunc pInitFunc,
    CU_CleanupFunc pCleanFunc)
{
    CU_pSuite pSuite;

    pSuite = CU_get_suite(suite);
    if (pSuite == NULL) {
        pSuite = CU_add_suite(suite, pInitFunc, pCleanFunc);
        CU_set_suite_active(pSuite, patmatch(opts.suite, suite));
    }
}

#define ADD_SUITE(suite, init, clean) \
  add_suite(#suite, init, clean)

static void
add_test(
    const char *suite,
    const char *test,
    CU_TestFunc pTestFunc,
    bool enable)
{
    CU_pSuite pSuite;
    CU_pTest pTest;

    pSuite = CU_get_suite(suite);
    pTest = CU_add_test(pSuite, test, pTestFunc);
    CU_set_test_active(pTest, enable && patmatch(opts.test, test));
}

#define ADD_TEST(suite, test, enable) \
  add_test(#suite, #test, CU_TestProxyName(suite, test), enable)

/* CMake will expand the macro below to declare generated functions. */

CU_TestDecl(ddsi_ipaddr, is_nearby_address);
CU_TestDecl(ddsi_locator_from_string, bogusproto);
CU_TestDecl(ddsi_locator_from_string, ipv4_cross1);
CU_TestDecl(ddsi_locator_from_string, ipv4_cross2);
CU_TestDecl(ddsi_locator_from_string, udpv4mcgen);
CU_TestDecl(ddsi_locator_from_string, ipv4_invalid);
CU_TestDecl(ddsi_locator_from_string, ipv4);
CU_TestDecl(ddsi_locator_from_string, ipv6_invalid);
CU_TestDecl(ddsi_locator_from_string, ipv6);
CU_TestDecl(ddsi_plist_generic, ser_and_deser);
CU_TestDecl(ddsi_plist_generic, unalias);
CU_TestDecl(ddsi_plist_generic, invalid_input);
CU_TestDecl(ddsi_plist_generic, optional);
CU_TestDecl(ddsi_plist, unalias_copy_merge);
CU_TestDecl(ddsi_plist, locator_lists_reject);
CU_TestDecl(ddsi_plist, locator_lists_accept);
CU_TestDecl(ddsi_plist_leasedur, deser);
CU_TestDecl(ddsi_plist_leasedur, ser_spdp);
CU_TestDecl(ddsi_plist_leasedur, ser_others);
CU_TestDecl(ddsi_plist_leasedur, new_proxypp);
CU_TestDecl(ddsi_plist_leasedur, new_proxypp_def);
CU_TestDecl(ddsi_plist_leasedur, new_proxyrd);
CU_TestDecl(ddsi_plist_leasedur, new_proxyrd_def);
CU_TestDecl(ddsi_pmd_message, valid);
CU_TestDecl(ddsi_pmd_message, invalid_sequence);
CU_TestDecl(ddsi_pmd_message, bogus_header);
CU_TestDecl(ddsi_radmin, drop_gap_at_end);
CU_TestDecl(ddsi_sysdeps, log_stacktrace_self);
CU_TestDecl(ddsi_sysdeps, log_stacktrace_other);
CU_TestDecl(ddsi_wraddrset, some_cases);
CU_TestDecl(ddsi_security_msg, serializer);

int main(int argc, char *argv[])
{
    int ret = EXIT_SUCCESS;

    if (parse_options(argc, argv) != 0) {
        usage(argv[0]);
        return EX_USAGE;
    } else if (opts.print_help) {
        help(argv[0]);
        return ret;
    } else if (CU_initialize_registry() != CUE_SUCCESS) {
        fprintf(stderr, "CU_initialize_registry: %s\n", CU_get_error_msg());
        return EX_SOFTWARE;
    }

/* CMake will expand the macro below to register all suites and tests. */

ADD_SUITE(ddsi_ipaddr, NULL, NULL);
ADD_TEST(ddsi_ipaddr, is_nearby_address, true);
ADD_SUITE(ddsi_locator_from_string, NULL, NULL);
ADD_TEST(ddsi_locator_from_string, bogusproto, true);
ADD_TEST(ddsi_locator_from_string, ipv4_cross1, true);
ADD_TEST(ddsi_locator_from_string, ipv4_cross2, true);
ADD_TEST(ddsi_locator_from_string, udpv4mcgen, true);
ADD_TEST(ddsi_locator_from_string, ipv4_invalid, true);
ADD_TEST(ddsi_locator_from_string, ipv4, true);
ADD_TEST(ddsi_locator_from_string, ipv6_invalid, true);
ADD_TEST(ddsi_locator_from_string, ipv6, true);
ADD_SUITE(ddsi_plist_generic, NULL, NULL);
ADD_TEST(ddsi_plist_generic, ser_and_deser, true);
ADD_TEST(ddsi_plist_generic, unalias, true);
ADD_TEST(ddsi_plist_generic, invalid_input, true);
ADD_TEST(ddsi_plist_generic, optional, true);
ADD_SUITE(ddsi_plist, NULL, NULL);
ADD_TEST(ddsi_plist, unalias_copy_merge, true);
ADD_TEST(ddsi_plist, locator_lists_reject, true);
ADD_TEST(ddsi_plist, locator_lists_accept, true);
ADD_SUITE(ddsi_plist_leasedur, NULL, NULL);
ADD_TEST(ddsi_plist_leasedur, deser, true);
ADD_TEST(ddsi_plist_leasedur, ser_spdp, true);
ADD_TEST(ddsi_plist_leasedur, ser_others, true);
ADD_TEST(ddsi_plist_leasedur, new_proxypp, true);
ADD_TEST(ddsi_plist_leasedur, new_proxypp_def, true);
ADD_TEST(ddsi_plist_leasedur, new_proxyrd, true);
ADD_TEST(ddsi_plist_leasedur, new_proxyrd_def, true);
ADD_SUITE(ddsi_pmd_message, NULL, NULL);
ADD_TEST(ddsi_pmd_message, valid, true);
ADD_TEST(ddsi_pmd_message, invalid_sequence, true);
ADD_TEST(ddsi_pmd_message, bogus_header, true);
ADD_SUITE(ddsi_radmin, NULL, NULL);
ADD_TEST(ddsi_radmin, drop_gap_at_end, true);
ADD_SUITE(ddsi_sysdeps, NULL, NULL);
ADD_TEST(ddsi_sysdeps, log_stacktrace_self, true);
ADD_TEST(ddsi_sysdeps, log_stacktrace_other, true);
ADD_SUITE(ddsi_wraddrset, NULL, NULL);
ADD_TEST(ddsi_wraddrset, some_cases, true);
ADD_SUITE(ddsi_security_msg, NULL, NULL);
ADD_TEST(ddsi_security_msg, serializer, true);

    CU_set_error_action(opts.error_action);
    CU_basic_run_tests();

    if (CU_get_error() != CUE_SUCCESS) {
        ret = EX_SOFTWARE;
    } else if (CU_get_number_of_failures() != 0) {
        ret = EXIT_FAILURE;
    }

    CU_cleanup_registry();

    return ret;
}

