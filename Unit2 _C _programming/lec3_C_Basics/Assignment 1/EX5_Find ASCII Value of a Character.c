/*
 ============================================================================
 Name        : EX5_Find.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char i;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&i);
	fflush(stdin); fflush(stdout);
	printf("ASCII value of %c is : ",i);
	printf("%d",i);
}
