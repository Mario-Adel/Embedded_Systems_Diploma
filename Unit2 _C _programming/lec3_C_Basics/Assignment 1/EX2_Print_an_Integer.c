/*
 ============================================================================
 Name        : EX2_Print_an_Integer.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int i;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	fflush(stdin); fflush(stdout);
	printf("You entered: %d",i);

}
