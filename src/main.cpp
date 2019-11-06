// C++ File for main

#include <cstdio>
#include <stdlib.h>
#include <cmath>

#include "utils.h"

int main( int argc, char* argv[] ) {
  
  int num_vals = 256;
  float vals[num_vals];

  float upper = 2000.0;
  float lower = 1500.0;

  gen_vals<float>( vals, upper, lower, num_vals );  
  printf("Input Values:\n");
  printf_floats( vals, 10 );

  return 0;
}

// end of C++ file for main
