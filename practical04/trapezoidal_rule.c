/* compile with math library using -lm */
#include <stdio.h>
#include <math.h>

float pi;
float degtorad(float arg);

int main(void) {
   float degang, radang;
   pi = atanf(1.0)*4.0;
   degang = 10.0;
   radang = degtorad(degang);
   printf("Deg %f, Rad %f\n", degang, radang);
   return 0;
}

float degtorad(float arg) {
   return( (pi*arg)/180.0 );
}