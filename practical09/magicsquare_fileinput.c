#include<stdio.h>
#include<stdlib.h>
#define MAX_FILE_NAME 100
#include"magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main() {
	
	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");
	scanf("%s", filename);

	// open file
	f = fopen(filename, "r");

	int n=getlines(filename);
	
	//Allocate a matrix
	int i;
	int ** magicSquare = malloc(n *sizeof(int*));

	for(i=0; i<n; i++) {
		magicSquare[i] = malloc(n * sizeof(int));
	}

	int j;
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			fscanf(f, "%d", &magicSquare[i][j]);
		}
	}
	
	printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is": "is NOT");

	for(i=0; i<n; i++) {
		free(magicSquare[i]);
	}	
	free(magicSquare);

	fclose(f); 

	return 0;
}

int getlines(char filename[MAX_FILE_NAME]) {

	FILE *fp;
	fp = fopen(filename, "r");

	int ch_read;
	int count=0;
	
	while( (ch_read = fgetc(fp)) != EOF) {
		if (ch_read == '\n') {
			count++;		
		}
	}	

	printf("No. of lines %d\n", count);
	fclose(fp);

	return count;


}












