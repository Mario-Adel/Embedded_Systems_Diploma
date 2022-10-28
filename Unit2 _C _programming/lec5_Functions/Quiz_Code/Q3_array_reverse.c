/*
 ============================================================================
 Name        : Q3_array_reverse.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

void arr_swap(int arr[],int size);
void getarr(int arr[],int size);
void printarr(int arr[],int size);


int main(void) {

	int arr[100],size;
	printf("Enter size of the array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	printf("Enter the array\n");
	getarr(arr,size);
	printf("Input array is : ");
	printarr(arr,size);
	arr_swap(arr,size);
	printf("\nReverse array is : ");
	printarr(arr,size);

}

void arr_swap(int arr[],int size){

	int temp,i=0,j=0;
	j = size-1;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}

void getarr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){

		printf("enter the %d number :",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
}

void printarr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		fflush(stdout); fflush(stdin);
		printf("%d ",arr[i]);
	}
}
