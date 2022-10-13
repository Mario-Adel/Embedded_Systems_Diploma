/*
 ============================================================================
 Name        : LAP1_Calc_Circle.c
 Author      : Mario Adel
 Version     :
 Copyright   : Your copyright notice

 ============================================================================  */
//In this program the user has to choose between calculating circle area or circle
//circumference.
// If the user presses „a‟ character it proceeds with area calculation and printing.
//If the user presses „c‟ character it proceeds with circumference calculation and printing.
//If the user presses other letters the program prints an error message
#include <stdio.h>
int main(void) {
	char choice;
	float radius;
	float area, circumference;
	printf("This program calculate circle area or circumference \nEnter circle radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&radius);
	fflush(stdin); fflush(stdout);
	printf("a for Area \nc for circumference\nEnter your choice :  ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);

	if (choice == 'a')
	{
		area = 3.14159 * radius * radius;
		printf("area = %f ", area);
	}
	else if(choice == 'c')
	{
		circumference = 2 * 3.14159 * radius;
		printf("circumference = %f" , circumference);
	}
	else
		printf("wrong choice\n");

}
