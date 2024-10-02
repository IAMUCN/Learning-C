#include<stdio.h>

int main(){
    int age = 25;
    if (age>=60){
        printf("You can drive & you are a senior citizen");
    // here if the first statement is true then it will not check further statements and will ignore else if and else
    // so whenever using if else-if else ladder use the conditions properly here if i swapout 18 and 60 then the code will not work
    }
    else if (age>=18) {
        printf("You can drive");
    }
    else{
        printf("You can not drive");
        // else is optional
    }
     return 0;
}