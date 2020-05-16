// C++ File for prime_decomposition

#include <iostream>
#include <stdlib.h>

#include "prime_decomposition.h"


void prime_decomposition_gmp( std::vector<mpz_class>& prime_factors, const mpz_class val, const bool debug ) {

   mpz_class t_val = val;
   mpz_class t_div(2);

   while( t_val > mpz_class(1) ) {
      if ( ( t_val % t_div ) == mpz_class(0) ) {
         prime_factors.push_back( t_div );
         t_val = t_val/t_div;
      } else {
         ++t_div;
      }
   } // end of while( t_val > mpz_class(1) ) {
}

// end of C++ file for prime_decomposition
