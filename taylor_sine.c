#include "taylor_sine.h"

double taylor_sine(double x, int n) {
  // implement your function here
  
  int sign = 1;
  double taylor_sum = 0, term = x, fact_val = 1;
  
  for (int i = 0; i < n; i++)
  {
    taylor_sum += sign * term / fact_val;

    sign = -sign;

    term *= x * x;

    fact_val *= (2 * i + 2) * ( 2 * i + 3);
  } 
  return taylor_sum;
}