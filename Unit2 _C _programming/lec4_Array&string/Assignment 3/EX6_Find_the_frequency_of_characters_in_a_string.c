/*
 ============================================================================
 Name        : EX6_Find_the_frequency_of_characters_in_a.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i,freq=0;
	char chara,str[1000];

	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
    gets(str);

	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&chara);


	for(i=0 ; str[i]!='\0' ; ++i)
	{
		if(str[i]==chara)
			freq+=1;
	}
	printf("Frequency: %d",freq);
	return 0;
}
