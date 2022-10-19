/*
 ============================================================================
 Name        : EX7_Find_a_lenght_of_a_string.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int i;
	char str[1000];

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i=0 ; str[i]!='\0' ; ++i);

	printf("Length of string: %d ",i);
	return 0;
}
