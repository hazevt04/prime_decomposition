// C++ File for main

#include "prime_decomposition.h"

void usage( const char* prog_name ) {
   printf( "Usage: %s <integer>\n", prog_name );
   printf( "\tReturns list of prime numbers which\n" );
   printf( "\twhen all multiplied together, are\n" );
   printf( "\tequal to that number.\n" ); 
}

int main( int argc, char** argv ) {
   int val = 2;
   if ( argc > 1 ) {
      val = strtol( argv[1], NULL, 10 );
   } else {
      usage( argv[0] );
      exit( EXIT_FAILURE );
   }

   int prime_factors[val];
   int num_prime_factors = 0;
   bool debug = false;

   prime_decomposition( &(prime_factors[0]), &num_prime_factors, val, debug );

   debug_printf( debug, "Number of prime factors = %d\n", num_prime_factors ); 
   printf( "Prime Factors of %d: { ", val ); 
   for( int index = 0; index < num_prime_factors; index++ ) {
      printf( "%d%s ", prime_factors[index], ( ( index < (num_prime_factors-1) ) ? ",":"" ) ); 
   }
   printf( "}\n" ); 

   exit( EXIT_SUCCESS );
}


