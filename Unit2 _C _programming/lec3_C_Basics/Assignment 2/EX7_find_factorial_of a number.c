/*
 ============================================================================
 Name        : EX7_find_factorial_of.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int num,y,F=1;
	printf("Enter  the number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	fflush(stdout); fflush(stdin);
	if(num < 0)
	{
		printf("Error! Factorial of negative number dosen't exist");
	}
	else
	{
		for(y=1 ; y<=num; y++ )
		{
			F = F * y;
		}
		printf("Factorial = %d",F);
	}
	return 0;
}
