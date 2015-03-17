#include "../const_types.h"
#include <type_traits>

int ld2i( cldouble & d )
{ return int(d); }


int main()
{
  cbool x1= true;

  cint  a1= -5;
  cuint b1=  6;
  cldouble d1= 3.14;

  cauto c1= ld2i( d1 );
  cauto &e1= b1;

  cuint8_t   f1= 8;
  cint16_t   g1= 16;
  cuint32_t  h1= 32;
  cint64_t   i1= 64;

  cintmax_t  j1= -2048;
  cuintmax_t k1=  4096;

  cint8_t    l1= 9;
  cuint16_t  m1= 17;
  cint32_t   n1= 33;
  cuint64_t  o1= 65;

  cint_least8_t   p1= 10;
  cuint_least16_t q1= 18;
  cint_fast32_t   r1= 34;
  cuint_fast64_t  s1= 66;

  csize_t         t1= 67;

  static_assert( std::is_same<const int,            decltype(a1)>::value, "" );
  static_assert( std::is_same<const unsigned int,   decltype(b1)>::value, "" );
  static_assert( std::is_same<const int,            decltype(c1)>::value, "" );
  static_assert( std::is_same<const long double,    decltype(d1)>::value, "" );
  static_assert( std::is_same<const unsigned int &, decltype(e1)>::value, "" );
  static_assert( std::is_same<const uint8_t,        decltype(f1)>::value, "" );
  static_assert( std::is_same<const int16_t,        decltype(g1)>::value, "" );
  static_assert( std::is_same<const uint32_t,       decltype(h1)>::value, "" );
  static_assert( std::is_same<const int64_t,        decltype(i1)>::value, "" );
  static_assert( std::is_same<const intmax_t,       decltype(j1)>::value, "" );
  static_assert( std::is_same<const uintmax_t,      decltype(k1)>::value, "" );
  static_assert( std::is_same<const int8_t,         decltype(l1)>::value, "" );
  static_assert( std::is_same<const uint16_t,       decltype(m1)>::value, "" );
  static_assert( std::is_same<const int32_t,        decltype(n1)>::value, "" );
  static_assert( std::is_same<const uint64_t,       decltype(o1)>::value, "" );
  static_assert( std::is_same<const int_least8_t,   decltype(p1)>::value, "" );
  static_assert( std::is_same<const uint_least16_t, decltype(q1)>::value, "" );
  static_assert( std::is_same<const int_fast32_t,   decltype(r1)>::value, "" );
  static_assert( std::is_same<const uint_fast64_t,  decltype(s1)>::value, "" );
  static_assert( std::is_same<const size_t,         decltype(t1)>::value, "" );
  static_assert( std::is_same<const bool,           decltype(x1)>::value, "" );
}
