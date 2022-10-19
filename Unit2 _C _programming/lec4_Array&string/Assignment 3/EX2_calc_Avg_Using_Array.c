/*
 ============================================================================
 Name        : EX2_calc_Avg_Using_Arrays.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int n,i;
	float array[n];
	float sum;

	printf("Enter the numbers of data : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(i=0 ; i<n ; i++)
	{
		printf("%d. Enter your number : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&array[i]);
	}

	for(i=0 ; i<n ; i++)
	{
		sum += array[i];
	}
	printf("Average = %f", sum/n);
	return 0;
}
