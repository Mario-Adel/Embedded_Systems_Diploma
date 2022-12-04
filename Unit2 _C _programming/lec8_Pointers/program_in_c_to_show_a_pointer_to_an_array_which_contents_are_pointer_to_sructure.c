/*
 ============================================================================
 Name        : program_in_c_to_show_a_pointer_to_an_array_which_contents_are_pointer_to_sructure.c
 Author      : Mario_Adel
 Version     :
 ============================================================================
 */

#include <stdio.h>

struct employee {
		char *name;
		int id;
	};

int main() {

	//structure employee:
    struct employee emp1 = {"Alex",1002},emp2 = {"Mark",1003},emp3 = {"John",1004};
	//array of pointers that point to struct employee (of the same type of struct)
	struct employee *arr[] = {&emp1,&emp2,&emp3};
	//pointer to arr of type struct
	struct employee *(*p)[3] = &arr;

	printf(" Employee Name : %s \n", (*(*p))->name);

	printf(" Employee ID :  %d \n",(*(*p))->id);

}
