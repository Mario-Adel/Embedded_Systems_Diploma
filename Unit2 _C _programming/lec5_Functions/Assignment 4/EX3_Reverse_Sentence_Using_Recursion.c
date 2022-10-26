/*
 * EX3_Reverse_Sentence_Using_Recursion.c
 *
 *  Created on: Oct 26, 2022
 *      Author: Mario
 */

#include <stdio.h>

void Reverse();
int main()
{
	printf("Enter a Sentence :");
	fflush(stdin);	fflush(stdout);
	Reverse();
}

void Reverse()
{
	char x;
	scanf("%c",&x);
	if(x != '\n'){
		Reverse();
		printf("%c",x);
	}
}
