/*
 ============================================================================
 Name        : Q5_clear.c
 Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int clear_bit(int,int);
int main(void) {
	int n, bit;
	printf("Input number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	fflush(stdin); fflush(stdout);
	printf("Bit position : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&bit);
	printf("result = %d",clear_bit(n,bit));
}

int clear_bit(int n,int bit)
{
	n=n & ~(1<<bit);
	return n;

}
