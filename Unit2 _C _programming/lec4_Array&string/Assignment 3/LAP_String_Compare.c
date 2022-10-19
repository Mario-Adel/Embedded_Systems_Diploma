/*
 ============================================================================
 Name        : LAP_String_Compare.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {

	int i;
	char names [4][10] = {"Ahmed", "Osama", "Samy" ,"Ola" };
	char name [10];

	printf("Enter Your Name : ");
	fflush(stdout); fflush(stdin);
	scanf("%s",name);
	fflush(stdout); fflush(stdin);
	for (i=0; i<4 ; i++ )
	{
		if ((stricmp(name, names[i])==0))
		{
			printf("Congratulation, Your name is in the list.");
			break;
		}

	}

	if(i==4)
	{
		printf("Sorry, Your name is not in the list");
	}

	return 0;
}
