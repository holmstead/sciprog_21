/* compile with math library using -lm */
#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i, N;
   float a, b_deg, sum1, sum2, sum3, pi, delta, tmp, tmp2, var1, var2, var3, diff, log2;

/* Initialise variables */
   pi = M_PI;
   a = 0.0;
   b = pi/3;
   b_deg = 60.0;

   printf("\n## Part 1 ##\n Declaring limits.\n");
   printf("\n\ta = %d\n", a);
   printf("\tb (pi/3) = %f\n", b);

/* First sum */
   printf("\n## Part 2 ##\n Get the sum of (tan(x) from 0 to pi/3).\n");
   sum1 = tan(a) + tan(b);
   printf("\n\tsum1 (tan(x) from 0 to pi/3) = %f\n", sum1);

/* Generate 11 eqidistant points */
   printf("\n## Part 3 ##\n Create a loop that generates 11 equidistant points between 0 to pi/3.\n");
   i = 0; N = 12, tmp = 0.0, sum2 = 0.0; delta = b/N;
   printf("\n\tN = %d", N);
   printf("\n\tdelta (b/N) = %f", delta);
   printf("\n\n");

   while (tmp <= b) {
     printf("\t\tx_%i = %f\n", i, tmp);         
     tmp += delta;
     i++;

   return 0;
  }

   /*printf("\n## Part 4 ##\n Change the loop so that we add 2tan(xi) for each of the 11 points.\n");
   var1 = (b-a)/(2*N);
   printf("\n\tvar1 ( 2tan(xi) ) = %f\n", var1);*/

   /*i=0, tmp = 0.0;
   /*while (tmp <= b) {
     printf("\n\t\tx_%i = %f\n", i, tmp);
     
     sum2 += 2*tan(tmp);
     /*printf("\t\tsum2 = %f\n", sum2);*/     
     tmp += delta;
     /*printf("\t\ttmp = %f\n", tmp);*/
     tmp2 = tmp + sum2;
     /*printf("\t\ttmp2 = %f\n", tmp2);

     i++; 
   } */

   sum3 = (tmp2) * var1;

/* Compare the difference with log(2) */
   /*printf("\n## Part 4 ##\n Compare the difference with log(2).\n");
   printf("\n final answer = %f\n", sum3);
   log2 = log10(2);
   printf(" log(2) = %f\n", log2);
   diff = sum3 - log2;*/

   /*printf("\n Difference between the answer and log(2) is %f\n", diff);*/
   
}