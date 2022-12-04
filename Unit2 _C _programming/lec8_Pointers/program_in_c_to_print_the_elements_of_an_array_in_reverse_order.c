/*
 * program_in_c_to_print_the_elements_of_an_array_in_reverse_order.c
 *
 *  Created on: Dec 3, 2022
 *      Author: Mario
 */

#include <stdio.h>

int main(){
	int i;
	int num;
	int arr_num[15];
	int *p;

	p=arr_num;
	printf("Input the number of elements to store in the array (max15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("\nInput %d number of elements in the array: \n",num);

	for(i=0;i<num;i++){
		printf("element-%d :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",p);
		p++;
	}


	printf("The elements of array in reverse order are : ");
	p = &arr_num[num-1];
	for(i=num ;i>0;i--){
			printf("\nelement-%d : %d",i,*p);
			p--;
		}
}
