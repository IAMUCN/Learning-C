#include <stdio.h>
// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.
int main()
{
    int arr[3][10];
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = 2 * (j + 1);
            }
        }
        else if (i == 1)
        {
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = 7 * (j + 1);
            }
        }
        else if (i == 2)
        {
            for (int j = 0; j < 10; j++)
            {
                arr[i][j] = 9 * (j + 1);
            }
        }
    }


    // now we print the values 
    printf("The table of 2 is Below \n");

    for (int i = 0; i < 10; i++)
    {
        printf("2 X %d = %d\n", i + 1, arr[0][i]);
    }
    printf("\n");
    printf("The table of 7 is Below \n");

    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n", i + 1, arr[1][i]);
    }
    printf("\n");
    printf("The table of 9 is Below \n");

    for (int i = 0; i < 10; i++)
    {
        printf("9 X %d = %d\n", i + 1, arr[2][i]);
    }
    printf("\n");

    return 0;
}