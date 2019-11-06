// C++ File for utils

#include "utils.h"

void printf_floats( float* const vals, const int num_vals ) {
  for( int index = 0; index < num_vals; index++ ) {
    printf( "%f\n", vals[index] );
  } 
  printf("\n");
}

void printf_ints( int* const vals, const int num_vals ) {
  for( int index = 0; index < num_vals; index++ ) {
    printf( "%d\n", vals[index] );
  } 
  printf("\n");
}

void printf_uints( unsigned int* const vals, const int num_vals ) {
  for( int index = 0; index < num_vals; index++ ) {
    printf( "%u\n", vals[index] );
  } 
  printf("\n");
}

// end of C++ file for utils
