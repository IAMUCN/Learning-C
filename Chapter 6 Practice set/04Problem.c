#include<stdio.h>
 // Write a function and pass the value by reference.
 float addthendivide (int *a , int *b);
 float addthendivide (int *a , int *b){
    return (*a+*b)/10.0;

 }
int main(){
    int x= 9867,y=6312;
    addthendivide(&x,&y);
    printf("The resut after passing through the function is %.2f",addthendivide(&x,&y));
    
    return 0;
}