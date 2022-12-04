/*
 ============================================================================
 Name        :program in C to print a string in reverse using a pointer
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char str[50];
	char rev_str[50];
	int j=-1;
	char *ps = str;
	char *prs = rev_str;

	printf("Input String :");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);

	while(*ps){    //count string elements before the NULL char in j
		ps++;
		j++;
	}

	for(;j>=0;--j){
		ps--;
		*prs=*ps;				//starting from last ele in the str (the last pointed ele)
		prs++;
	}

	*prs='\0';    //NULL char
	fflush(stdin); fflush(stdout);
	printf("\nReverse of the string is : %s \n ",rev_str);
}
