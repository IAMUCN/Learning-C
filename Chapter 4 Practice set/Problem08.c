#include<stdio.h>

int main(){
    // Write a program to calculate the factorial of a given number using a for loop
    int i,facto = 1;
    printf("Enter a number to get the factorial : \n");
    scanf("%d",&i);
    for ( int n  = 1 ; n<= i ; n++ ){
      facto *= n ;
    }
    printf("The value of factorial of %d is \t %d",i,facto);
     return 0;
}