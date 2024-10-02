#include<stdio.h>

int main(){
    int year;
    printf("Enter the YEAR\n");
    scanf("%d",&year);
    if( ( year%4==0 && year%100!=0)|| year % 400==0)
    printf("The year you entered is a leap year");
    else
    printf("The year you entered is NOT a leap year");
    return 0;
}