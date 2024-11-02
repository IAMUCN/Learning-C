#include <stdio.h>

int main()
{
    char i = 's';
    char *j = &i; // j is a pointer pointing to i (j is an character pointer )
    float k = 0.658;
    float *l = &k; // the data type of the pointer should be same as the datatype of variable whose address is being stored
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", l); // or &k
    printf("The value at address j is %d\n", *j);
    return 0;
}