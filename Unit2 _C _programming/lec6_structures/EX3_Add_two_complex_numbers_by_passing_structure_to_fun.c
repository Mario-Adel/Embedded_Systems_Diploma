/*
 ============================================================================
 Name        : EX3_Add_two_complex_numbers_by_passing_structure_to_fun.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct scomplex {
	float real;
	float imagin;
}num_1,num_2,sum;

struct scomplex add_complex(struct scomplex num1,struct scomplex num2);
int main(void) {

	printf("For 1st complex number ");
	printf("\nEnter real and imaginary respectively:");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&num_1.real,&num_1.imagin);

	printf("\nFor 2st complex number ");
	printf("\nEnter real and imaginary respectively:");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&num_2.real,&num_2.imagin);

	sum=add_complex(num_1,num_2);
	printf("Sum = %.1f+%.1fi",sum.real,sum.imagin);
}

struct scomplex add_complex(struct scomplex num1,struct scomplex num2){
	struct scomplex sum;
	sum.imagin=num1.imagin+num2.imagin;
	sum.real=num1.real+num2.real;

	return sum;
};
