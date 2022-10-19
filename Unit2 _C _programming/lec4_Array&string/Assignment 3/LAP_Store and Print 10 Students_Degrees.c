/*
 ============================================================================
 Name        : LAP_Store and Print 10 Students Degrees
 Author      : Mario_Adel

 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float deg [10];
	int j;
	for (j=0 ;j<10 ; j++)
	{
		printf("Enter student %d degree: ", j+1 );
		fflush(stdout); fflush(stdin);
		scanf("%f", &deg[j]);
	}
	for(j=0 ; j<10 ; j++)
	{
		printf("Student %d degree: %f \n", j+1 , deg[j] );
	}
	return 0;
}
