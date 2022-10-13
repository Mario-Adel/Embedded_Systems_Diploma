/*
 * EX7_Swap_Two Numbers without temp variable.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Mario_Adel
 */


#include <stdio.h>
 int main(void){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	fflush(stdin); fflush(stdout);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);
	return 0;
}
