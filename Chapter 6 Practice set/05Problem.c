#include <stdio.h>
/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main()
*/
float average(int *a, int *b);
float average(int *a, int *b)
{
    return (*a + *b) / 2.0;
}
int sum(int *a, int *b);
int sum(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int x = 40, y = 60;
    printf("The values of average and sum of the numbers %d,%d are %.2f and %d", x, y, average(&x, &y), sum(&x, &y));
    return 0;
} 