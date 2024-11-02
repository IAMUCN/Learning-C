#include <stdio.h>

int main()
{
    int i = 72;
    int* j = &i ;                       // j is a pointer pointing to i , meaning j is storing the adress of i(j is an integer pointer )
    printf("The address of i is %p\n", &i);//& is called address of operator
    printf("The address of i is %p\n", j);
    // You can use %p to print address but if you want the address in integer use %u (unsigned int) 

    printf("The value at address j is %d\n", *j); // here we can use *j or *(&i) and here we have to use the format
    // specifier of the value not the address
    // here * is called value at operator

    // here j will also have it's own address cuz at the end it is also a variable 
    return 0;
}