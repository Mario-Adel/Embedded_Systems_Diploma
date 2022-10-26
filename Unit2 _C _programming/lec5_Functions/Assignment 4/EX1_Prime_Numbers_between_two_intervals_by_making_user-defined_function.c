/*
 * EX1_Prime_Numbers_between_two_intervals_by_making_user-defined_function.c
 *      Author: Mario_Adel
 */
#include <stdio.h>
int check_prim (int n);
int main (void)
{
	int flag,n1,n2,j;
	printf("Enter two interval numbers : ");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("prime numbers between %d & %d:\t",n1,n2);
	fflush(stdout); fflush(stdin);

	for(j=n1+1;j<n2;j++)
	{
		flag=check_prim(j);
		if(flag==0){
			printf("%d\t",j);
		}
	}
	return 0;
}
int check_prim (int n)
{
	int j,flag=0;
	for(j=2; j<=n/2 ; ++j)
	{
		if( n % j == 0){
			flag=1;
			break;
		}
	}
	return flag;
}
