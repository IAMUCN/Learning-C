#include <stdio.h>
// Write a program containing a function which reverses the array passed to it
void printArray(int a[], int n);
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

void reverse(int a[],int n);
void reverse(int a[],int n)
{   int temp;
    for (int i = 0; i < n/2; i++)   // we used n/2 because it's actually efficient than creating a temporary array
                                    // and it will work for both odd and even length of array
    {   
        temp =a[i];
        a[i]= a[n-i-1];
        temp = a[n-i-1];
// just because here the length of array starts from but index of array starts from 0 so to compensate this we have added extra -1 to the equation      
    }
    
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]); // C doesn't have a length function to find no of elements in an array so we have to use this way 
                                                //i.e we are dividing the total memory allocated to array / memory allocation of one element 
                                                // it starts from 1 not like index
    printArray(arr,length);
    printf("The length of the array is %d\n",length);
    reverse(arr,length);
    printf("Array after reversing \n");
    printArray(arr,length);
    return 0;
}
