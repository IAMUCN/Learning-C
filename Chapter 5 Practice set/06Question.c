#include <stdio.h>
// rite a recursive function to calculate the sum of first ‘n’ natural numbers.
int sum(int n);
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
}
int main()
{
   int  i = 0;
   printf("The sum of first %d natural numbers is %d",i,sum(i));
    return 0;
}