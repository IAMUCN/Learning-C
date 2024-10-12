#include<stdio.h>

int main(){
    // Write a program to print multiplication table of a given number n.
    int n ;
    printf("Enter a number to get it's table ");
    scanf("%d",&n);
    printf("The table of %d\n",n);
    for ( int i = 1 ; i <= 10; i++)
    {
        printf("%d X %d = %d\n" ,n,i,n*i );

    }
    // while using any snippet if you press tab then you come to the editable portion
     return 0;
}