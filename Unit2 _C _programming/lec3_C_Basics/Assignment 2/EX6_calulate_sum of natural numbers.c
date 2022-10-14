/*
 ============================================================================
 Name        : EX6_.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>
int main (void)
{
	int x ,y,sum;
	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&y);
	fflush(stdout); fflush(stdin);
	for (x=0 ; x<=y ; x++)
	{
		sum=sum+x;
	}

	printf("Sum = %d\n",sum);

}
