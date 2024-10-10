#include "taylor_sine.h"
#include <math.h>

double factorial(int n)
{
  double fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}  

double taylor_sine(double x, int n) {
    // double sine = 0.0;

    // for (int i = 0; i < n; i++) {
    //     // Beregner tæller og nævner seperat
    //     double tæller = pow(-1, i) * pow(x, (2 * i) + 1);
    //     int nævner = factorial((2 * i) + 1);
        
    //     // Tilføj rækkens led til summen
    //     sine += tæller / nævner;
    // }
double taylor_sum=0.0;
double term = x;
 int sign = 1;
 double fact_value = 1; 
 
for (int i = 0; i < n; i++)
{
  taylor_sum += sign * term / fact_value;
  term *= x*x;
  sign = -sign;
  fact_value *= (2*i +2) *(2*1+3);
}
 return taylor_sum;

   // return sine;
}
