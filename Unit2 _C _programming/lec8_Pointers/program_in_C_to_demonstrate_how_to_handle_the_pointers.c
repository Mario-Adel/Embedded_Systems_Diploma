/*
 ============================================================================
 Name        : program_in_C_to_demonstrate_how_to_handle_the_pointers.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int m = 29;
	int * ab = NULL;

	printf("Address of m : %p \n",&m);
	printf(" value of m : %d \n\n",m);
//---------------------------------------------------
	ab=&m;
	printf("Now ab is assigned with the address of m \n");
	printf("Address of pointer ab : %p \n",ab);
	printf("Content of pointer ab : %d \n\n",*ab);
//-----------------------------------------------------
	*ab = 34;
	printf("The value of m assigned to 34 now \n");
	printf("Address of pointer ab : %p \n",ab);
	printf("Content of pointer ab : %d \n\n",*ab);
//------------------------------------------------------
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now \n");
	printf("Address of pointer ab : %p \n",ab);
	printf("Content of pointer ab : %d \n\n",*ab);
}
