#include<stdio.h>

int main(){
    int n = 45;
    float m = 32.23;
    

m = (int) m ;// here we can not store the int value of m in to the variable m because it's a type is float so we have to use another variable of int data type
printf("%d\n",m);
     return 0;
}
// Casting and Printing: When you cast m to an integer, it will truncate the decimal part, but you are trying to print it using %d, which is for integers. Since m is a float, you should cast it to an integer before printing.
// Variable Type Mismatch: After casting m to an integer, you should store it in an integer variable to avoid confusion.