#include<stdio.h>

int main(){
    // Write a program to print multiplication table of 10 in reversed order
    int n ;
    printf("Enter a number to get it's table ");
    scanf("%d",&n);
    printf("The table of %d\n",n);
    for ( int i = 10 ; i >= 1; i--)
    {
        printf("%d * %d = %d\n" ,n,i,n*i );

    }
     return 0;
}