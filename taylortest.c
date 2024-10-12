#include <math.h>
#include <stdio.h>
#include "taylor_sine.h"


int main() 
{
double pi = 3.14;
printf("sin(pi) = %f\n", sin(pi));
printf("taylor_sine(pi) = %f\n", taylor_sine(pi, 8));
// sin(pi) = 0.001593
// taylor_sine(pi) = 0.001592

// this test did not give the exact same and this is because the series number is too low

printf("\n");

printf("sin(pi) = %f\n", sin(pi/2.0));
printf("taylor_sine(pi) = %f\n", taylor_sine(pi/2.0, 10));
// sin(pi) = 1.000000
// taylor_sine(pi) = 1.000000

printf("\n");

printf("sin(pi) = %f\n", sin(0));
printf("taylor_sine(pi) = %f\n", taylor_sine(0, 1));
// sin(pi) = 0.000000
// taylor_sine(pi) = 0.000000

printf("\n");

printf("sin(pi) = %f\n", sin(pi/4.0));
printf("taylor_sine(pi) = %f\n", taylor_sine(pi/4.0, 6));
// sin(pi) = 0.706825
// taylor_sine(pi) = 0.706825

printf("\n");

printf("sin(pi) = %f\n", sin(0.005));
printf("taylor_sine(pi) = %f\n", taylor_sine(0.005, 3));
// sin(pi) = 0.005000
// taylor_sine(pi) = 0.005000

 return 0;
}



