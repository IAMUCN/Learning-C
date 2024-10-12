#include <stdio.h>
int factorial(int);
// Factorial (5) = 1 x 2 x 3 x 4 x 5
// Factorial (4) = 1 x 2 x 3 x 4 
// Factorial (n) = Factorial n-(1) x (n)

int factorial(int n)
{
    if( n == 1 || n==0){ // Base condition it ensures that the recursive program ends
        return 1;
    }
    return n * factorial(n-1);
}
int main()
{
    int a = 5;
    printf("The factoroial of %d is %d", a, factorial(a));
    return 0;
}