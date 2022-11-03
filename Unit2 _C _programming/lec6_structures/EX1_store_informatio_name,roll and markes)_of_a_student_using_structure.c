/*
 ============================================================================
 Name        : EX1_store_informatio_name,roll and marks)_of_a_student_using_structure.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Student {
	char name[15];
	int roll;
	float marks;
}student;

void stor_student ();
void print_student();

int main(void) {
	printf("Enter Information of students: ");
	fflush(stdin); fflush(stdout);
	stor_student ();
	printf("\nDisplay Information");
	fflush(stdin); fflush(stdout);
	print_student();
}

void stor_student ()
{
	printf("\nEnter name:");
	fflush(stdin); fflush(stdout);
	scanf("%s",student.name);

	printf("Enter roll number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&student.roll);

	printf("Enter marks:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&student.marks);
};
void print_student(){
	printf("\nname: %s",student.name);
	printf("\nRoll: %d",student.roll);
	printf("\nMarks: %0.2f",student.marks);
};
