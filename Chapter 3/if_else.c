#include<stdio.h>

int main(){
    int age = 4;
    if (age>10){
        printf("We are inside if\n");
        printf("Your age is grater than 10");
        // here if there are multiple statements in if statement then you use {} these brackets  
        // other wise if you have only 1 statement in if statement then you can use white space 
        // same goes for else 
    }else{
        printf("Your age is not grater than 10");
    }
     return 0;
}