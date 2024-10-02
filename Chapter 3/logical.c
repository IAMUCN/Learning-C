#include<stdio.h>

int main(){
    int a=1,b=0;
    printf("The value of a and b is %d\n",a&&b );
    printf("The value of a or b is %d",a||b );
    // and operator is like multiplication
    // or operator is like addition
    // not oprator just swithches the value from true to false
    if(a&&b){
        printf("both are true");
    }
    if (a){
        if(b){
         printf("bpth are true");
        }
    }

     return 0;
}