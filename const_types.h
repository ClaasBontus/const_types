#ifdef __cplusplus
# include <cstdint>
# include <cstddef>
#else
# include <stdint.h>
# include <stddef.h>
#endif

#ifdef __cplusplus
# define cauto auto const
typedef const bool cbool;
#else
typedef const _Bool cbool;
#endif


typedef const char                 cchar;
typedef const short                cshort;
typedef const unsigned short       cushort;
typedef const int                  cint;
typedef const unsigned int         cuint;
typedef const long                 clong;
typedef const unsigned long        culong;
typedef const long long            cllong;
typedef const unsigned long long   cullong;
typedef const size_t               csize_t;

typedef const float                cfloat;
typedef const double               cdouble;
typedef const long double          cldouble;

typedef const intmax_t             cintmax_t;
typedef const uintmax_t            cuintmax_t;


#define GENTYPE(n) \
typedef const  int ## n ## _t   cint ## n ## _t; \
typedef const uint ## n ## _t  cuint ## n ## _t;

#ifdef INT8_MIN
GENTYPE(8)
#endif
#ifdef INT_LEAST8_MIN
GENTYPE(_least8)
#endif
#ifdef INT_FAST8_MIN
GENTYPE(_fast8)
#endif

#ifdef INT16_MIN
GENTYPE(16)
#endif
#ifdef INT_LEAST16_MIN
GENTYPE(_least16)
#endif
#ifdef INT_FAST16_MIN
GENTYPE(_fast16)
#endif

#ifdef INT32_MIN
GENTYPE(32)
#endif
#ifdef INT_LEAST32_MIN
GENTYPE(_least32)
#endif
#ifdef INT_FAST32_MIN
GENTYPE(_fast32)
#endif

#ifdef INT64_MIN
GENTYPE(64)
#endif
#ifdef INT_LEAST64_MIN
GENTYPE(_least64)
#endif
#ifdef INT_FAST64_MIN
GENTYPE(_fast64)
#endif

#undef GENTYPE
