#include<stdio.h>

int sum (int a, int b);

int sum (int a, int b){
    a = 6;      // here sum function can not change x  because a copy of x is provided to sum
    return a+b;
}
int main(){
    int x = 1 , y = 7 ;
    printf("The sum of two numbers is %d",sum(x,y));
     return 0;
}