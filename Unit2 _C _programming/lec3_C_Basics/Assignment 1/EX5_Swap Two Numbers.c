/*
 ============================================================================
 Name        : EX5_Swap.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>
int main(void){
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);
	return 0;

}
