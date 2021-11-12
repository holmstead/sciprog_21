#include<stdio.h>
#include<stdlib.h>

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(){

	//declare variables
	int n=5, p=3, q=4;
	//declare arrays (static, cannot resize arrays)
	double A[n][p], B[p][q], C[n][q];
	int i, j, k;

	//Initialise A, B, and C matrices
	//2 arrays so 2 loops to initalise them
	for (i=0; i<n; i++){
		for(j=0; j<p; j++){
			A[i][j]=i+j;
		}
	}

	for (i=0; i<p; i++){
		for(j=0; j<q; j++){
			B[i][j]=i-j;
		}
	}

	for (i=0; i<n; i++){
		for(j=0; j<q; j++){
			C[i][j]=0.0;
		}
	}
	
	//Perform matrix multiplication
    matmult(n, p, q, A, B, C);
	/*for(i=0; i<n; i++)
		for(j=0; j<q; j++)
			for(k=0; k<p; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];*/

	
	//Print out the matrices
	printf("\nThe matrix A is:\n\n");
		for(i=0; i<n; i++){
			for(j=0; j<p; j++){
				printf("%3.0f ", A[i][j]);
		}
		printf("\n");
		}

	printf("\nThe matrix B is:\n\n");
		for(i=0; i<p; i++){
			for(j=0; j<q; j++){
				printf("%3.0f ", B[i][j]);
		}
		printf("\n");
		}

	printf("\nThe matrix C is:\n\n");
		for(i=0; i<n; i++){
			for(j=0; j<q; j++){
				printf("%3.0f ", C[i][j]);
		}
		printf("\n");
		}


	return 0;
}
