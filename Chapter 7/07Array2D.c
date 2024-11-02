#include <stdio.h>

int main()
{
    int arrays[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of arrays[%d][%d]", i, j);
            scanf("%d", &arrays[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // to view it in matrix format
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arrays[i][j]);
        }
        printf("\n");
    }

    /*   for (int i = 0; i < 3; i++)
       {
           for (int j = 0; j < 3; j++)
           {
               printf("Element having %d th row & %d th column is %d\n",i,j,arrays[i][j]);
           }

       }

       */

    return 0;
}