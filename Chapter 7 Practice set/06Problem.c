#include<stdio.h>
// Write a program containing functions which counts the number of positive integers in an array.
int positive(int a[],int n);
int positive(int a[],int n){
    int nos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {           
           nos++; 
        }
        
    }
    return nos;
    
}

int main(){
    int arr[]= {12,25,85,-74,-89,68,97,15,-32,44,55,85,-99,-78,-85,25,69,-88,0,-0,58,96,78};
    int arrlength = sizeof(arr)/sizeof(arr[0]);
    printf("The number of positive integers in the array is %d\n",positive(arr,arrlength));
    
     return 0;
}