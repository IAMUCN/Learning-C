#include<stdio.h>

int main(){
    int marks[90]; // reserve space to store 90 integers i.e from 0 to 89
    marks[0]=45;
    marks[1]=95;
    marks[2]=65;
    marks[3]=83;
    // we can go all the way till marks[89]
    printf("The value of marks 0 and marks 1 is %d,%d",marks[0],marks[1]);

     return 0;
}