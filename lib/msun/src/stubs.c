#include <math.h>

#define LIBCXX_LONG_DOUBLE_STUB(fn) __attribute__((weak)) long double fn ## l(long double x) { return fn(x); }
#define LIBCXX_LONG_DOUBLE_STUB2(fn) __attribute__((weak)) long double fn ## l(long double x, long double y) { return fn(x, y); }

LIBCXX_LONG_DOUBLE_STUB(cosh)
LIBCXX_LONG_DOUBLE_STUB(asinh)
LIBCXX_LONG_DOUBLE_STUB(atanh)
LIBCXX_LONG_DOUBLE_STUB(acosh)
LIBCXX_LONG_DOUBLE_STUB(erfc)
LIBCXX_LONG_DOUBLE_STUB(erf)
LIBCXX_LONG_DOUBLE_STUB(exp)
LIBCXX_LONG_DOUBLE_STUB(expm1)
LIBCXX_LONG_DOUBLE_STUB(lgamma)
LIBCXX_LONG_DOUBLE_STUB(log10)
LIBCXX_LONG_DOUBLE_STUB(log1p)
LIBCXX_LONG_DOUBLE_STUB(log2)
LIBCXX_LONG_DOUBLE_STUB(log)
LIBCXX_LONG_DOUBLE_STUB(tanh)
LIBCXX_LONG_DOUBLE_STUB(sinh)
LIBCXX_LONG_DOUBLE_STUB(tgamma)
LIBCXX_LONG_DOUBLE_STUB2(pow)
