#include <stdio.h>
/* Write a program to print the address of a variable. Use this address to get the
value of the variable. */

int main()
{
    int a = 57;
    int *b = &a;
    printf("The value of a is %d", *b);
    return 0;
}