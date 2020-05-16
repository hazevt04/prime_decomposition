// C++ File for main

#include <string.h>
#include "prime_decomposition.h"

// Determined empirically.
// Seg faults at 1 << 19
#define MAX_MPZ_ARRAY_SIZE (1<<18)


void usage( const char* prog_name ) {
   printf( "Usage: %s <integer>\n", prog_name );
   printf( "\tReturns list of prime numbers which\n" );
   printf( "\twhen all multiplied together, are\n" );
   printf( "\tequal to that number.\n" ); 
}


int main( int argc, char** argv ) {
   bool debug = true;
   mpz_class val;
   if ( argc > 1 ) {
      if ( !strcmp( argv[1], "-h" ) || !strcmp( argv[1], "--help" ) ) {
         usage( argv[0] );
         exit( EXIT_SUCCESS );
      } else {
         val = argv[1];
      }
   }
   
   if (debug) {
      std::cout << "val is " << val << std::endl;
   }
   
   std::vector<mpz_class> prime_factors;

   prime_decomposition_gmp( prime_factors, val, debug ); 

   std::cout << "Number of prime factors : " << prime_factors.size() << std::endl;

   size_t num_prime_factors = prime_factors.size();
   std::cout << "Prime Factors: ";
   for ( size_t index = 0; index < num_prime_factors; ++index ) {
      std::cout << prime_factors.at(index);
      if (index < num_prime_factors-1 ) {
         std::cout << ", ";
      }
   }
   std::cout << std::endl;

   exit( EXIT_SUCCESS );
}


