#include<stdio.h>

int main(){
    float a,b,c,d;
    printf("Enter the first number :\n");
    scanf("%f",&a);
    printf("Enter the second number :\n");
    scanf("%f",&b);
    printf("Enter the third number :\n");
    scanf("%f",&c);
    printf("Enter the fourth number :\n");
    scanf("%f",&d);
    if(a>b&&a>c&&a>d)
    printf("The greatest number is %.2f",a);
    else if (b>a&&b>c&&b>d)
    {
        printf("The greatest number is %.2f",b);
    }
    else if (c>a&&c>b&&c>d)
    {
        printf("The greatest number is %.2f",c);
    }
    else
    printf("The greatest number is %.2f",d);
    
    
     return 0;
}