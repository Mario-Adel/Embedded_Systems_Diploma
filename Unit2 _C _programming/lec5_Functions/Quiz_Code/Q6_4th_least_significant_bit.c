/*
 ============================================================================
 Name        : Q6_4th_least_significant_bit.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int know_bit(char num);
void print_binary(char num);

int main(void) {
	char number;
	printf("enter a decimal number:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);
	fflush(stdout); fflush(stdin);
	printf("%d in binary = ",number);
	print_binary(number);
	printf("\n4th least significant bit is %d : ",know_bit(number));

}

int know_bit(char num)
{
	int j;
	j=num>>3;
	if(j&1)
		return 1;
	else
		return 0;

}

void print_binary(char num)
{
	int j,c;
	for(c=8;c>=0;c--){
		j=num>>c;
		if(j&1)
			printf("1");
		else
			printf("0");
	}

}
