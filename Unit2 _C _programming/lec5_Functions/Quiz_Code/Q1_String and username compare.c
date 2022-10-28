/*
 ============================================================================
 Name        : Q1_String.c
 Author      : Mario_Adel

 ============================================================================
 */

#include "stdio.h"
#include"string.h"

int main()
{	char string[100],name[100];
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	scanf("%s",string);
	fflush(stdout); fflush(stdin);
	printf("Enter your name:");
	fflush(stdout); fflush(stdin);
	scanf("%s",name);
	if(stricmp(string,name)== 0)
	{
		printf("Identical");
	}
	else
	{
		printf("different");

	}
}
