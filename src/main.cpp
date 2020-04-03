// C++ File for main

#include "sieve.h"

int main( int argc, char* argv[] ) {
   int val = 50;
   int num_primes = 0;
   int* primes = ( int* )calloc( val, sizeof(int) );
   
   printf( "Val is %d\n", val );
   sieve( primes, &num_primes, val );

   for ( int index = 0; index < num_primes; index++ ) {
      printf( "%d) %d\n", index, primes[index] );
   }
   printf( "\n" );
} 
