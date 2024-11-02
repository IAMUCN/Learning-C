#include<stdio.h>

int main(){
    int i = 6 ;
    int *j = &i ;
    int **k = &j ; // stores address of a address
    
    //  ***&&&a = the value of a in simple words * cancels & these are opposites of each other;


    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*&i);
    printf("The value of i is %d\n",**(&j));

    return 0;
}