/*
 ============================================================================
 Name        : Q2_swapping_two_arrays_diff.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>
void getarr(int arr[],int size);
void printarr(int arr[],int size);
void arrswap(int arr1[],int arr2[]);

int main(){
	int arr1[100],arr2[100];
	int size1,size2;

	//first array input

	printf("Enter the first array size: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&size1);
	fflush(stdout); fflush(stdin);
	printf("Enter the first array\n\n");
	fflush(stdout); fflush(stdin);
	getarr(arr1,size1);

	//second array input
	printf("\nEnter the second array size: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&size2);
	fflush(stdout); fflush(stdin);
	printf("Enter the second array\n\n");

	getarr(arr2,size2);


	//print the first and the second array
	printf("\nArrays before Swapping\n");
	printf("\nThe first array : ");
	printarr(arr1,size1);
	printf("\nThe second array : ");
	printarr(arr2,size2);

	printf("\n\nArrays After Swapping\n");
	arrswap(arr1,arr2);
	printf("\nThe first array :");
	printarr(arr1,size2);
	printf("\nThe second array :");
	printarr(arr2,size1);

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
void arrswap(int arr1[],int arr2[]){
	int temp,i;
	for(i=0;i<100;i++){
		temp = arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}


