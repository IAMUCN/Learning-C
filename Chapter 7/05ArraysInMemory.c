#include <stdio.h>

int main()
{
    int marks[90];
    printf("Enter marks of 5 students\n");

    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("Input taking process completed \n");

    for (int i = 0; i <= 4; i++)
    {
        printf("The address of marks at index %d is %u\n",i,&marks[i]);
    }
    return 0;
}