/*
 ============================================================================
 Name        : EX5_search_an_element_in Array.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int num,i,ele;
	int arr[num];
	printf("Enter number of elements :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Enter the values : \n");
	fflush(stdin); fflush(stdout);
	for (i=0 ; i<num ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the elements to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ele);

	for(i=0 ; i<num ; i++)
	{
		if(arr[i]==ele)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
		else
			continue;

	}
	return 0;


}
