#include <stdio.h>
// Create a three–dimensional array and print the address of its elements in increasing order
int main()
{
    int arr3d[3][3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr3d[i][j][k] = i + j + k;
            }
        }
    }


// Now printing the values of its pointers in contiguous blocks    here they will differ by 4 bytes as the data type is int 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("pointer of arr3d[%d][%d][%d] is %u\n",i,j,k,&(arr3d[i][j][k]));
                
            }
            printf("\n");
            
        }
        printf("\n");
        
    }

    return 0;
}