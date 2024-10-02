#include<stdio.h>

int main(){
    int length,breadth ;
    printf("Enter length : \t");
    scanf("%d",&length);
    printf("Enter breadth : \t");
    scanf("%d",&breadth);
    int area = length*breadth;
    printf("The area of the rectangle is : %d",area);
     return 0;
}
