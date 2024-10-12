#include <stdio.h>
int change(int a ){
    a = 77;   // Misnomer
    return 0; 
}

int main()
{
    int b = 22;
    change(b);
    printf("the value of b is %d",b);
    // here the value of b will stay 22 because in change function
    // the value of b is copied not the actual memory alloction of b 

    return 0;
}