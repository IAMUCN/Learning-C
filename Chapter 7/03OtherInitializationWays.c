#include <stdio.h>

int main()
{
    int cgpa[] = {9, 8, 8};                      // even if we don't gove the number of elements in an array it will automatically detect .
     for (int i = 0 ; i <= 2 ;i++ ){
        printf(" cgpa [%d] = %d\n",i,cgpa[i]);
    }
    return 0;
}