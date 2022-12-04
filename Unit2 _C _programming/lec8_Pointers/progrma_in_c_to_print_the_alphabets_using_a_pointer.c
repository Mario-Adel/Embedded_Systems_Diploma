/*
 ============================================================================
 Name        : progrma_in_c_to_print_the_alphabets_using_a_pointer.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */
#include <stdio.h>
int main() {

	char alph[27];
	char *ptr;
	int i;

	ptr = alph; //pointer ptr point to char A location in the ROM

//-----assign alphabets to alph array by using pointer to array-------

	for(i=0;i<26;i++){

		*ptr='A'+i;
		ptr++;
	};

//-----Print the array of alphabets alpha-------
	printf("The Alphabets are : ");
	ptr = alph;   //return the pointer to point to the first alphabet

	for(i=0;i<26;i++){

		printf("%c ",*ptr);
		ptr++;
	}
}
