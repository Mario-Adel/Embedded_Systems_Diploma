/*
 ============================================================================
 Name        : EX3_add_two_integers.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int i,j;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	scanf("%d",&j);
	fflush(stdin); fflush(stdout);
	printf("sum: %d",i+j);

}
