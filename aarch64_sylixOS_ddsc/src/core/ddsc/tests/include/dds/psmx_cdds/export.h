
#ifndef PSMX_CDDS_EXPORT_H
#define PSMX_CDDS_EXPORT_H

#ifdef PSMX_CDDS_STATIC_DEFINE
#  define PSMX_CDDS_EXPORT
#  define PSMX_CDDS_NO_EXPORT
#else
#  ifndef PSMX_CDDS_EXPORT
#    ifdef psmx_cdds_EXPORTS
        /* We are building this library */
#      define PSMX_CDDS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PSMX_CDDS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PSMX_CDDS_NO_EXPORT
#    define PSMX_CDDS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PSMX_CDDS_DEPRECATED
#  define PSMX_CDDS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PSMX_CDDS_DEPRECATED_EXPORT
#  define PSMX_CDDS_DEPRECATED_EXPORT PSMX_CDDS_EXPORT PSMX_CDDS_DEPRECATED
#endif

#ifndef PSMX_CDDS_DEPRECATED_NO_EXPORT
#  define PSMX_CDDS_DEPRECATED_NO_EXPORT PSMX_CDDS_NO_EXPORT PSMX_CDDS_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PSMX_CDDS_NO_DEPRECATED
#    define PSMX_CDDS_NO_DEPRECATED
#  endif
#endif

#ifndef PSMX_CDDS_INLINE_EXPORT
#  if __MINGW32__ && (!defined(__clang__) || !defined(psmx_cdds_EXPORTS))
#    define PSMX_CDDS_INLINE_EXPORT
#  else
#    define PSMX_CDDS_INLINE_EXPORT PSMX_CDDS_EXPORT
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
#ifndef PSMX_CDDS_EXPORT_INTERNAL_FUNCTION
#  define PSMX_CDDS_EXPORT_INTERNAL_FUNCTION PSMX_CDDS_EXPORT
#endif

#endif /* PSMX_CDDS_EXPORT_H */
