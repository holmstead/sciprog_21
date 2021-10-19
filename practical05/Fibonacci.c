#include<stdio.h>
#include<stdlib.h>

void fibo(int *a, int *b);

int main(void) {
	int n;

	// get information from user
	printf("Enter a positive integer for n: \n");
	scanf("%d", &n);
	//printf("You have entered: %d", n);

	// side note - a little bit about pointers
	int *pointer_to_n = &n;
	printf("The value n is %d\n", n);
	printf("The value n is also %d\n", *pointer_to_n);
	printf("The address of n is %p\n", &n);

	if (n<1){
		printf("Number is less than 1\n");
		exit(1);
	}

	int n1=0, n2=1;

	printf("The Fibonacci sequence is: \n");
	printf("%d, ", n1);

	int i;
	for (i=1; i<n-1; i++){
		fibo(&n1, &n2);
		printf("%d, ", n1);
		}

	fibo(&n1, &n2);
	printf("%d\n", n1);

	return 0;
}

void fibo(int *a, int *b){

	int next;
	next = *a + *b;
	*a = *b;
	*b = next;
}