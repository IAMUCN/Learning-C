#include <stdio.h>
// Write a program using function to find average of three numbers. 
float avg(float a, float b, float c)
{
    return (float)(a + b + c) / 3; // here either you can type cast or you can write 3.0 so the value becomes float :)
}

int main()
{
    float x = 45, y = 46, z = 47;
    printf("The value of Average of x,y,z is %.2f\n", avg(x, y, z));
    return 0;
}