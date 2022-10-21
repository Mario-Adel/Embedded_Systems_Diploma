/*
 ============================================================================
 Name        : EX8_Reverse_string_without_using_library_function.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int i=0,j=0;
	char str[100],temp;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	j = strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}


	fflush(stdin); fflush(stdout);
	printf("Reverse string is: %s ",str);
	return 0;

}
