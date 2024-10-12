#include<stdio.h>

int main(){
    int i ,facto = 1 , n=1;
    printf("Enter a number to get the factorial : \n");
    scanf("%d",&i);
    while (n<=i)
    {
       facto *= n ;
       n++;
    }
    printf("The value of factorial of %d is \t %d",i,facto);

     return 0;
}