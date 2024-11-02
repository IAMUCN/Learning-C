#include<stdio.h>
/*Write a program to change the value of a variable to ten times of its current value.*/
int tentimes(int*a);
int tentimes(int*a){
   *a = *a * 10;
}
int main(){
    int x = 6 ;
    printf("The the actual value is %d\n",x);
    tentimes(&x);
    printf("The value of 10 times of the actual value is %d\n",x);
     return 0;
}