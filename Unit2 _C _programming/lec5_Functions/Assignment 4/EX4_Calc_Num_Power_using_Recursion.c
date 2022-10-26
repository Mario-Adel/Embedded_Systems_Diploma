/*
 * EX4_Calc_Num_Power_using_Recursion.c
 *
 *  Created on: Oct 26, 2022
 *      Author: Mario
 */

/*
 ============================================================================
 Name        : EX4_Calc_Num_Power_using_Recursion
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

int power(int,int);
int main (void)
{
	int n,p;
	printf("Enter the number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("Enter the power: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&p);
	printf("Number %d ^ %d = %d",n,p,power(n,p));
}
int power (int num,int pow)
{
	if(pow == 0)
		return 1;
	else
		return (num*=power(num,(pow-1)));

}
