/*
 ============================================================================
 Name        : Q8_print the last occurrence of a number.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */
#include <stdio.h>

int Last_occurrence(int arr[],int size,int num);
void getarr(int arr[],int size);

int main()
{
	int arr[100],size,num;
	printf("Enter size of the array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	getarr(arr,size);

	printf("enter the number you want to get its last occurrence: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Last occurrence is : %d",Last_occurrence(arr,size,num));


}
void getarr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){

		printf("enter the %d number :",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
}
int Last_occurrence(int arr[],int size , int num)
{
	int i;
	for(i=size; i>=0;i--)
	{
		if(arr[i]==num)
			return i+1;
	}
		return -1;


}
