#include<stdio.h>
int fibonacci(int f);
int fibonacci(int f){
    if (f==0){
     return 0;
    }
    else if (f==1)
    {
        return 1;
    }
    else if (f<0)           
    {
        printf("Invalid number");
    }
     return fibonacci(f-1) + fibonacci(f-2);
}
int main(){
    int n = 39 ;
    printf("The %d th fibonacci number is %d \n",n,fibonacci(n-1));
     return 0;
}