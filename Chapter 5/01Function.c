#include <stdio.h>
// function prototype
int sum(int, int);

// as long as you have typed function prototype you can write function definition before or after main function

// function definition
int sum(int x , int y)
{
    // printf("sum is %d\n", x + y);
    return x + y ; // return value should match with the return type in this case int 
}

int main()
{
    int a = 34, b = 68;
    // sum(a,b); //function call              // we used a function here , a function can be used multiple times
    printf("The value of sum of a and b is %d", sum(a, b));
    return 0;
}