/*
 ============================================================================
 Name        : EX1_Multidimensional-Array.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */
//program to find the sum of two matrix of order 2*2
#include <stdio.h>
int main(void) {

	int i,j;
	float x[2][2];
	float y[2][2];
	printf("This program to find the sum of two matrix of order 2*2\n");
	printf("Enter the elements of 1st matrix :\n");
	fflush(stdin); fflush(stdout);

	for(i=0 ; i<2 ; i++){
		for(j=0; j<2 ; j++){

			printf("Enter x%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&x[i][j]);
			fflush(stdin); fflush(stdout);
		}

	}

	printf("\nEnter the elements of 2st matrix : \n");
	fflush(stdin); fflush(stdout);

	for(i=0 ; i<2 ;i++){
		for(j=0; j<2 ; j++){

			printf("Enter x%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&y[i][j]);
			fflush(stdin); fflush(stdout);
		}

	}
	printf("sum of Matrix: \n");

	for(i=0 ; i<2 ;i++){
		for(j=0; j<2 ; j++){
			if(i==1&&j==0){
				printf("\n");
			}
			printf("%0.2f   ", x[i][j]+y[i][j]);
		}

	}
}

