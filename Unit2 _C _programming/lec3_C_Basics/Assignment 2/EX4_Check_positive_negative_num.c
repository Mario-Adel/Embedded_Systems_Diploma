/*
 ============================================================================
 Name        : EX4_Check_positive_negative_num.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	float i;
	printf("Enter a number :");
	fflush(stdout);
	scanf("%f",&i);
	if(i > 0)
	{
		printf("%f is Positive",i);
	}
	else if (i < 0)
	{
		printf("%f is Negative",i);
	}
	else
	{
		printf("%f is zero",i);
	}
	return 0;
}

