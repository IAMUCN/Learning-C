#include<stdio.h>

int main(){
    // int x = 2 ,y = 3 , z = 3 , k = 1 ;
    //  float s = 3*x/y-z+k;
    //  //3*x/y-z+k
    //  //6/y-z+k
    //  //-1+k
    //  //0
    //  printf("%f",s);
    //  return 0;
    int a,b,sum,sub,mul,div,mod;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    printf("The sum of the two numbers is : %d\n",a+b);
    printf("The subtraction of the two numbers is : %d\n",sub);
    printf("The multiplication of the two numbers is : %d\n",mul);
    printf("The division of the two numbers is : %d\n",div);
    printf("The modulus of the two numbers is : %d\n",a%b);
    return 0; }
