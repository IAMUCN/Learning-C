#include<stdio.h>
/*  Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why? */
void address (int* a);
void address (int* a){
    printf("Address after passing through function is %p\n",a);
}
int main(){
    int x = 6;
    int* y = &x;
    printf("Address without passing through function is %p\n",y);
    address(y);
    return 0;
}
