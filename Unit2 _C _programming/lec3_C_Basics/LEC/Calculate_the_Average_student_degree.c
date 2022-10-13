/*
 * main.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Mario_Adel
 */
#include <stdio.h>

int main (void)
{
   int num, i;
   float degree;
   float total=0;

   printf ("Enter students number :");
   fflush(stdin); fflush(stdout);
   scanf("%d" , &num);

   for (i=1 ; i<=num ; i++)
   {
    printf("Enter student (%d) degree = ", i);
    fflush(stdin); fflush(stdout);
    scanf("%f", &degree);
    total = total + degree;
   }


   printf("student avg degree is : %f" , total / num);

}
