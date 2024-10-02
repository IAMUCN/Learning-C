#include<stdio.h>

int main(){
    int age = 11;
    if (age>10){
        printf("We are inside if\n");
        printf("Your age is grater than 10");
    }
    if (age%5==0){
        printf("We are inside another if\n");
        printf("your age is a multiple of 5");
    }
     return 0;
}