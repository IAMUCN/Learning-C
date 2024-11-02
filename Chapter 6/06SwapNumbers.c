#include <stdio.h>

void swap (int *a,int *b);
void swap (int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp ;
    

}
int main()
{
    int x = 6, y = 7;
    swap(&x,&y);     // here we gave the address to swap function , in swap function we have use * i.e value at operator , so that address wll convert
                     // to actual value of x and the value of x will be passed to the swap function , the value of x will change here 
    printf("The value of x is %d & value of y is %d",x,y);


    return 0;
}