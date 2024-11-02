#include<stdio.h>

int main(){
    // int a = 5;
    // int * ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

//   The address of a is 6422296
//   The address of a is 6422296
//   The value of ptr is 6422300
//   in this architecture integer takes 4 bytes that's why ptr is increased by 4 


    char b = 'B';
    char* pt = &b;        // the type of pointer and the data should of same datatype
    printf("The address of b is %u\n",&b);
    printf("The address of a is %u\n",pt);
    pt++;
    printf("The value of pt is %u\n",pt);

// The address of b is 6422299
// The address of a is 6422299
// The value of pt is 6422300
//   in this architecture character takes 1 byte that's why ptr is increased by 1 

     return 0;
}