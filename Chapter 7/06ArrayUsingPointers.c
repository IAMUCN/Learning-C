#include<stdio.h>

int main(){
    int marks[] = {12, 32, 53,66};

    int* ptr  = &marks[0];
    // int* ptr  = marks;   // same as int* ptr  = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d-by using pointers\n",i,(*ptr+i)); // or you can use ptr++;
        printf("The marks at index %d is %d\n",i,marks[i]);
    }
    
    
     return 0;
}