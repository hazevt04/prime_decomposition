// C++ File for prime_decomposition

#include <iostream>
#include <stdlib.h>

#include "prime_decomposition.h"

void prime_decomposition( int* __restrict__ prime_factors, int* __restrict__ num_prime_factors, const int val, const bool debug=false ) {
   int t_prime = 2;
   int t_num_prime_factors = 0;

   int t_val = val;
   int p_index = 0;
   int pf_index = 0;
   while( t_val > 1 ) {
      if ( divides( t_val, t_prime ) ) {
         debug_printf( debug, "%s(): Temp Val is %d\n", __func__, t_val ); 
         debug_printf( debug, "%s(): Temp Prime is %d\n", __func__, t_prime );
         debug_printf( debug, "%s(): Temp Val was divisible by that prime. It is a prime factor\n", __func__ ); 
         debug_printf( debug, "%s(): pf_index is %d\n\n", __func__, pf_index ); 
         prime_factors[ pf_index++ ] = t_prime;
         t_val = t_val/t_prime;
         t_num_prime_factors++;
      } else {
         debug_printf( debug, "%s(): Temp Val is not divisible by that prime. Prime index incremented.\n\n", __func__ ); 
         ++t_prime;
      }
   } // end of while( t_val > 1 ) {
   
   *num_prime_factors = t_num_prime_factors;
}


// end of C++ file for prime_decomposition
