# const_types: Const correctness made easier

The importance of
[const correctness](https://isocpp.org/wiki/faq/const-correctness)
is a well known fact. *const_types.h* is a simple header file containing
a bunch of typedefs and (for C++) one macro (*cauto*). It's only purpose is to make
C/C++ source code more concise.

For instance the following code segment

```.cpp
#include <const_types.h>

int ld2i( cldouble d )
{ return int(d); }

int main()
{
  cint     a1= -5;
  cuint    b1=  6;
  cldouble c1= 3.14;

  cuint64_t   d1= 345;

  cauto  e1= ld2i( c1 );
  cauto &f1= b1;
}
```

is equivalent to

```.cpp
#include <cstdint>

int ld2i( const long double d )
{ return int(d); }

int main()
{
  const int          a1= -5;
  const unsigned int b1=  6;
  const long double  c1= 3.14;

  const uint64_t     d1= 345;

  auto const  e1= ld2i( c1 );
  auto const &f1= b1;
}
```

The following table summarizes all supported types.

|typedef|meaning|
|-------|-------|
|cbool|const bool|
|cchar|const char|
|cshort|const short|
|cushort|const unsigned short|
|cint|const int|
|cuint|const unsigned int|
|clong|const long|
|culong|const unsigned long|
|cllong|const long long|
|cullong|const unsigned long long|
|csize_t|const size_t|
| | |
|cfloat|const float|
|cdouble|const double|
|cldouble|const long double|
| | |
|cintmax_t|const intmax_t|
|cuintmax_t|const uintmax_t|
| | |
|cint8_t|const int8_t|
|cuint8_t|const uint8_t|
|cint16_t|const int16_t|
|cuint16_t|const uint16_t|
|cint32_t|const int32_t|
|cuint32_t|const uint32_t|
|cint64_t|const int64_t|
|cuint64_t|const uint64_t|
| | |
|cint_least8_t|const int_least8_t|
|cuint_least8_t|const uint_least8_t|
|cint_least16_t|const int_least16_t|
|cuint_least16_t|const uint_least16_t|
|cint_least32_t|const int_least32_t|
|cuint_least32_t|const uint_least32_t|
|cint_least64_t|const int_least64_t|
|cuint_least64_t|const uint_least64_t|
| | |
|cint_fast8_t|const int_fast8_t|
|cuint_fast8_t|const uint_fast8_t|
|cint_fast16_t|const int_fast16_t|
|cuint_fast16_t|const uint_fast16_t|
|cint_fast32_t|const int_fast32_t|
|cuint_fast32_t|const uint_fast32_t|
|cint_fast64_t|const int_fast64_t|
|cuint_fast64_t|const uint_fast64_t|
