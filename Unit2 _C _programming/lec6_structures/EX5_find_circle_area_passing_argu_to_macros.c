/*
 ============================================================================
 Name        : EX5_find_circle_area_passing_argu_to_macros.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>

#define pi 3.142857
#define area(r) pi*r*r

int main(void) {
	float r;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r);
	printf("\nArea=%0.2f",area(r));

}
