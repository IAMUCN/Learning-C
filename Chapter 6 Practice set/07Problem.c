
#include<stdio.h>
/*
Try problem 3 using call by value and verify that it does not change the value of 
the said variable. */
void tentimes(int a);
void tentimes(int a){
    a =  10*(a);
    // return a;
}
int main(){
    int x = 6 ;
    tentimes(x);
    printf("The value of x is %d",x);
     return 0;
}