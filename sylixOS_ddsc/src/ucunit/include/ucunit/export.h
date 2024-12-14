
#ifndef UCUNIT_EXPORT_H
#define UCUNIT_EXPORT_H

#ifdef UCUNIT_STATIC_DEFINE
#  define UCUNIT_EXPORT
#  define UCUNIT_NO_EXPORT
#else
#  ifndef UCUNIT_EXPORT
#    ifdef ucunit_EXPORTS
        /* We are building this library */
#      define UCUNIT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define UCUNIT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef UCUNIT_NO_EXPORT
#    define UCUNIT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef UCUNIT_DEPRECATED
#  define UCUNIT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef UCUNIT_DEPRECATED_EXPORT
#  define UCUNIT_DEPRECATED_EXPORT UCUNIT_EXPORT UCUNIT_DEPRECATED
#endif

#ifndef UCUNIT_DEPRECATED_NO_EXPORT
#  define UCUNIT_DEPRECATED_NO_EXPORT UCUNIT_NO_EXPORT UCUNIT_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef UCUNIT_NO_DEPRECATED
#    define UCUNIT_NO_DEPRECATED
#  endif
#endif

#ifndef UCUNIT_INLINE_EXPORT
#  if __MINGW32__ && (!defined(__clang__) || !defined(ucunit_EXPORTS))
#    define UCUNIT_INLINE_EXPORT
#  else
#    define UCUNIT_INLINE_EXPORT UCUNIT_EXPORT
#  endif
#endif

// Some internal functions are exported even though are not part of the API nor
// foreseen to ever be called by a user of the library (unlike some functions
// that are exported for convenience in building tools or even examples, such as
// the AVL tree).  One reason for this is that they are useful in instrumenting
// Cyclone DDS with some performance analysis tools, and it is in the interest
// of the projec that such analyses can be done.
//
// There is no guarantee that such internal symbols will remain available or
// that their role will be the same.
#ifndef UCUNIT_EXPORT_INTERNAL_FUNCTION
#  define UCUNIT_EXPORT_INTERNAL_FUNCTION UCUNIT_EXPORT
#endif

#endif /* UCUNIT_EXPORT_H */
