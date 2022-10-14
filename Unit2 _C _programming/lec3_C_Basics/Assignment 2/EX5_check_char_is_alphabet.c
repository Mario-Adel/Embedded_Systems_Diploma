/*
 ============================================================================
 Name        : EX5_check_char_is_alphabet.c
 Author      : Mario_Adel
 Version     :

 ============================================================================
 */

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    fflush(stdout); fflush(stdin);
    scanf("%c", &c);

    if ((c >='a' && c <= 'z') || (c >='A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
