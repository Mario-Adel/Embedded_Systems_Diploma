/*
 ============================================================================
 Name        : EX2_Calculate_Factorial_using_Recursion
 Author      : Mario_Adel
 ============================================================================
 */

#include <stdio.h>

int facto(unsigned int);
int main (void)
{
	int n;
	printf("Enter an integer number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("factorial of %d is : %d",n,facto(n));// calling by value : the value of n will be copied in variable num.

}
int facto (unsigned int num)
{
	if(num == 0)
		return 1;
	else
		return (num*facto(num-1));

}
