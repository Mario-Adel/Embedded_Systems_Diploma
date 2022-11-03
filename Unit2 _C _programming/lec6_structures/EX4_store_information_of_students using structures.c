/*
 ============================================================================
 Name        : EX4_store_information_of_students.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

typedef struct {
	char name[50];
	int roll;
	float marks;
}SStudent;
SStudent student[10];

int main(){
	int i;
	printf("Enter Information of students: ");

	for(i=0 ;i<10; i++){

		student[i].roll=i+1;
		printf("\nFor roll number %d",student[i].roll);

		printf("\nEnter name:");
		fflush(stdin); fflush(stdout);
		scanf("%s",student[i].name);

		printf("Enter marks:");
		fflush(stdin); fflush(stdout);
		scanf("%f",&student[i].marks);
	};

	printf("\nDisplaying information of students:\n");

	for(i=0 ;i<10; i++){
		printf("\nInformation for roll number %d:",i+1);
		printf("\nname: %s",student[i].name);
		printf("\nMarks: %0.1f",student[i].marks);
	};
}

