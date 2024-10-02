#include<stdio.h>

int main(){
    int income;
    printf("Enter your yearly income : \n");
    scanf("%d",&income);

    if( income < 250000 )
    {
        printf("You don\' have to pay any taxes");
    }
    else if ( 500000 > income >= 250000 )
    {
        printf("%f",((income-250000)*0.05));
    }
    else if ( 1000000 > income >= 500000 )
    {
        printf("%f",( (income - 500000 )* 0.2 )+( 250000 * 0.05));
    }
    else
    {
        printf("%f",(( income - 1000000 ) * 0.3 )+( 500000 * 0.2 )+( 250000 * 0.05f));    
    }
     return 0;
     // insted of %f if you write %.2f then your output will have two numbers after decimal
}