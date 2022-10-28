/*
 ============================================================================
 Name        : Q4_convert a decimal num to an unsigned integer
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>

unsigned int ch_to_u(char);
int main ()
{

	char ch;
	printf("Enter a character :");
	fflush(stdout); fflush(stdin);
	scanf("%c",&ch);
	fflush(stdout); fflush(stdin);
	printf("number=%u\n",ch_to_u(ch));

}

unsigned int ch_to_u(char ch)
{
	return (ch-'0');

}
