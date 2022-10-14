/*
 ============================================================================
 Name        : EX3_Find_the_largest_number.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x,y,z;
	printf("Enter three numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d" "%d" "%d",&x,&y,&z);
	fflush(stdout); fflush(stdin);
	if(x>y&&x>z)
	{
		printf("Largest number = %d ",x);
	}
	else if (y>x&&y>z)
	{

		printf("Largest number = %d ",y);

	}
	else
	{
		printf("Largest number = %d ",z);
	}
	return 0;
}
