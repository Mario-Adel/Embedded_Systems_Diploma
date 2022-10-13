/*
 * EX1_even_odd_check.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Mario
 */

#include <stdio.h>
int main (void) {
	int N;
	printf("Enter Your number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&N);
	fflush(stdin); fflush(stdout);
	if (N%2 == 0)
	{
		printf("%d is EVEN number.",N);
	}
	else
	{
		printf("%d is ODD number.",N);
	}
    return 0;
}
