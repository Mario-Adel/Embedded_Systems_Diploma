/*
 * LAP_Matrix_Transpose.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Mario_Adel
 */

#include <stdio.h>
int main (void){

	float x[3][3]; //Matrix [Raws] [Column]
	float z[3][3];
	int i,j;


	for (i=0 ; i<3 ; i++)  // for Raws
	{
		for (j=0 ; j<3 ; j++) // for Columns
		{
			printf("Enter the item (%d,%d) : ", i,j);
			fflush(stdout); fflush(stdin);
			scanf( "%f", &x[i][j]);
		}
	}

	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf( "%0.2f ", x[i][j]);
		}
		printf("\n");
	}

	printf("The Transpose matrix is:\n");

	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<3 ; j++)
		{
			z[i][j] = x[j][i];
			printf( "%0.2f ", z[i][j]);
		}

		printf("\n");
	}

	return 0;
}

