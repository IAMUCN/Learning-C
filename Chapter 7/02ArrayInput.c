#include<stdio.h>

int main(){
    int marks[90]; 
    printf("Enter marks of 5 students\n");
     // scanf("%d,%d,%d,%d,%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
    // put comma between numbers
    for (int i = 0 ; i <= 4 ;i++ ){
        scanf("%d",&marks[i]);
    }
    printf("Input taking process completed \n");
   // printf("The value of array of marks is %d,%d,%d,%d,%d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    for (int i = 0 ; i <= 4 ;i++ ){
        printf(" marks [%d] = %d\n",i,marks[i]);
    }
     return 0;
}