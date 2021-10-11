#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   char str[2] = {'1', '/'};
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      /*printf("%s%d ", str, i);*/
      sum1 += 1.0/i;
   }
   
   printf("\n\n");

/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) { 
      /*printf("%s%d ", str, i);*/    
      sum2 += 1.0/i;
   }

   printf("\n\n");

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2;

   printf(" Difference between the two is %f\n",diff);

}
