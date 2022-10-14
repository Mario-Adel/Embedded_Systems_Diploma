/*
 ============================================================================
 Name        : EX2_check.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char x;
	printf("Enter an alphabet: ");
	fflush(stdout); fflush(stdin);
	scanf("%c", &x);
	if(x=='a'||x=='o'||x=='u'||x=='i'||x=='e')
	{
		printf("%c is an vowel.",x);
	}
	else
	{
		printf("%c is an consonant.",x);
	}


}
