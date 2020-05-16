#ifndef __PRIME_DECOMPOSITION_H__
#define __PRIME_DECOMPOSITION_H__

#include <math.h>
#include <vector>
#include <gmpxx.h>

#include "utils.h"

void prime_decomposition_gmp( std::vector<mpz_class>& prime_factors, const mpz_class val, const bool debug );

#endif // end of #ifndef __PRIME_DECOMPOSITION_H__
