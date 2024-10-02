#include<stdio.h>

int main(){
    //ANY "NON ZERO VALUE" IN C INSIDE 'IF' IS CONSIDERD TO BE "TRUE"
    if(1){
        printf("This if is executed  1\n");
    }
     if(25464){
        printf("This if is executed 2\n");
    }
     if(2.74){
        printf("This if is executed 3\n");
    }
    if('c'){
        printf("This if is executed 4\n");
    }
    if(0){
        printf("I am zero i am not executed\n");
    }
     return 0;
}