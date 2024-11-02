#include <stdio.h>
/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array. */
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    int *ptr = arr;
    printf("The third element using pointer is %d\n", *(ptr + 2));
    printf("The third element using direct call is %d\n", arr[2]);

    return 0;
}