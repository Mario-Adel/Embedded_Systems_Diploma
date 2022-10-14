/*
 ============================================================================
 Name        : EX8_Calculator.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>
#

int main(void) {
	float y,z;
	char x;
	printf("Enter operator either + or _ or / or * :");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	fflush(stdout); fflush(stdin);
	printf("Enter two operands: ");
	fflush(stdout); fflush(stdin);
	scanf("%f" "%f" ,&y,&z);
	switch(x)
	{
	case '+' :
	{
		printf("%f" "%c" "%f = %f" ,y,x,z,y+z);
		break;
	}
	case '-' :
	{
		printf("%f" "%c" "%f = %f" ,y,x,z,y-z);
		break;
	}
	case '*' :
	{
		printf("%f" "%c" "%f = %f" ,y,x,z,y*z);
		break;
	}
	case '/' :
	{
		printf("%f" "%c" "%f = %f" ,y,x,z,y/z);
		break;
	}

	}


}
