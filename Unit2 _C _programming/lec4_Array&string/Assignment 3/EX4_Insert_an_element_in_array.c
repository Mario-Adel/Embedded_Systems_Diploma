/*
 ============================================================================
 Name        : EX4_Insert_an_element_in_array.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int i,num,element,location;
	int array[30];
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Enter the values : \n");
	fflush(stdin); fflush(stdout);
	for (i=0 ; i<num ; i++)
	{
		scanf("%d",&array[i]);
	}

	printf("\nEnter the element to be inserted :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=num ; location <= i ; i-- ) //locate a space for the element in its location
	{
		array[i]=array[i-1];
	}
	++num;
	array[location-1]=element;


	for (i=0 ; i<num ; i++)
	{
		printf("%d",array[i]);
	}
}
