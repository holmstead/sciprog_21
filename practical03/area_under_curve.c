/* compile with math library using -lm */
#include <stdio.h>
#include <math.h>

int main(void) {

// Declare variables
   int i, N;
   float a, b, b_deg, sum2, sum3, pi, delta, tmp, tmp2, var1, var2, var3, diff, log2;

// Initialise variables
   pi = M_PI;
   a = 0.0;
   b = pi/3;
   b_deg = 60.0;

   printf("\n## Part 1 ##\nDeclaring limits:");
   printf("\n\ta = %f", a);
   printf("\n\tb (pi/3) = %f\n", b);

//Convert pi/3 to radians
//   float b_rad;
//   b_rad=(M_PI * b_deg)/180.0;
//   printf("\n\npi/3 in Radians = %f\n", b_rad);

// First sum
   printf("\n## Part 2 ##\nGet the sum of (tan(x) from 0 to pi/3):");
   float area = tan(a) + tan(b);
   printf("\n\tarea (tan(x) from 0 to pi/3) = %f\n", area);

// Generate 11 eqidistant points
   printf("\n## Part 3 ##\nCreate a loop that generates 11 equidistant points between 0 to pi/3:");
   i = 0; N = 12, tmp = 0.0, sum2 = 0.0; delta = b/N;
   printf("\n\tN = %d", N);
   printf("\n\tdelta (b/N) = %f", delta);

   for(i=5; i<60; i=i+5){
      area=area+2*tan((pi*i)/180.0);
      printf("\tNew area at x%d =%f\n", i/5, area);
   }

// Multiply with b-a/2N 
   float mult_rad=pi*((b_deg-a)/(2*N))/180.0;
   area=mult_rad*area;
   //Approximated value
   printf("\nTrapezodial result = %f\n", area);

// Compare the difference with log(2)
   printf("\n## Part 4 ##\nCompare the difference with log(2).\n");
   printf("log(2.0) = %f\n", log(2.0));
   diff = area - log(2.0);

   printf("\nDifference between the answer and log(2) is %f\n", diff);

return 0;
}
