#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter the number: \n");
    int num;
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("The number is invalid (<= 1)\n");
    }
    else if (num == 2)
    {
        printf("The given number is prime\n");
    }
    else
    {
        int temp = 0;
        int i = 2;
        while (i <= sqrt(num)) // used edge copilot because here if i use num then in o/p  i get 3 as not a prime number 
                                // i just copy pasted my code to copilot it suggested the correction and i did that sqrt.
        {
            if (num % i == 0)
            {
                temp = 1;
                break;
            }
            i++;
        }

        if (temp)
        {
            printf("The given number is not a prime number\n");
        }
        else
        {
            printf("The given number is a prime number\n");
        }
    }

    return 0;
}
