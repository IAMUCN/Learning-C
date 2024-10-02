#include<stdio.h>

int main(){
    float p,t,r;
    printf("Enter your principal amount : ");
    scanf("%f",&p);
    printf("Enter your Time  : ");
    scanf("%f",&t);
    printf("Enter your Rate of intrest : ");
    scanf("%f",&r);
    printf("The value of Simple intrest is : %f ",(p*t*r)/100.0);
     return 0;
}