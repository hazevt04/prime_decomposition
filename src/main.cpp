// C++ File for main

#include <cstdio>
#include <stdlib.h>
#include <cmath>

#include <gsl/gsl_math.h>
#include <gsl/gsl_complex_math.h>

#include "utils.h"

int main( int argc, char* argv[] ) {
  
  int num_vals = 256;
  float vals[num_vals];

  float upper = 2000.0;
  float lower = 1500.0;

  gen_vals<float>( vals, upper, lower, num_vals );  
  printf("Input Values:\n");
  printf_floats( vals, 10 );

  int order = 2;
  float m[order];
  gsl_complex p[order];
  //m = numpy.arange(-N+1, N, 2)
  m[0] = -1;
  m[1] = 1;

  //p = -numpy.exp(1j * pi * m / (2 * N))
  double temp_x = M_PI/(2*order);
  printf("temp_x is %13.12f\n", temp_x );
  for( int index = 0; index < order; index++ ) {
     double temp_mx = m[index] * temp_x;
     printf("temp_mx is %13.12f\n", temp_mx );

     gsl_complex ctemp_mx = gsl_complex_rect( 0.0, temp_mx );
     p[index] = gsl_complex_negative(gsl_complex_exp( ctemp_mx ));
     printf("p[%d] = %f + j%f\n", index, GSL_REAL(p[index]), GSL_IMAG(p[index]) );
  }
  return 0;
}

// end of C++ file for main
