/*
 ============================================================================
 Name        : Q7_Chech_if_a.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>
int num_check(int num);

int main()
{
	int num;
	printf("Enter a Number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("%d ==> %d",num,num_check(num));
}

int num_check(int num){

	if((num%3)==0)
		return 0;
	else
		return 1;
}
