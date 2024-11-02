#include<stdio.h>

int main(){
    int a = 4; 
    // my ans 4 5 5
    printf("%d %d %d \n", a, ++a, a++); 
    // if printf have same variables then it will evaluate from right to left 
    // here the output depends on the evaluation order of the compiler so both of them are right 4 5 5 anf 6 6 4
     return 0;
}   