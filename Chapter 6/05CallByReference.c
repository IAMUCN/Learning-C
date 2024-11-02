#include <stdio.h>
int sum(int* a, int* b);

int sum(int* a, int* b)
{
    *a = 6;
    return *a + *b;
}
int main()
{
    int x = 1, y = 7;
    printf("The sum of two numbers is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}