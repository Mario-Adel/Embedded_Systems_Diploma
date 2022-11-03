/*
 ============================================================================
 Name        : EX2_Add_two_distances_(inch_feet)_sys_using_structures.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct distance_sum {
	int feet;
	float inch;
}dis_1,dis_2;

void dis_add (struct distance_sum dis1,struct distance_sum dis2);

int main(void) {


	printf("Enter information for 1st distance");
	fflush(stdin); fflush(stdout);

	printf("\nEnter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&dis_1.feet);

	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dis_1.inch);

	printf("\nEnter information for 2nd distance");

	printf("\nEnter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&dis_2.feet);

	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dis_2.inch);

	dis_add (dis_1,dis_2);
}

void dis_add (struct distance_sum dis1,struct distance_sum dis2){
	struct distance_sum sum;

	sum.feet=dis1.feet+dis2.feet;
	sum.inch=dis1.inch+dis2.inch;

	if(sum.inch>12.0)
	{
		sum.inch-=12.0;
		++sum.feet;
	}

	fflush(stdin); fflush(stdout);
	printf("Sum of distances = %d\'-%0.1f\"",sum.feet,sum.inch);
};
