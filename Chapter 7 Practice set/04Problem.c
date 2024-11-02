#include<stdio.h>
//  Repeat problem 3 for a general input provided by the user using scanf.
int main(){
    int num;
    printf("Enter the number to get it's TABLE\t");
    scanf("%d",&num);
    int table[10];
    for (int i = 0; i < 10; i++)
    {
        table[i]= num * (i+1);
    }
    printf("The table of %d is \n",num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d  = %d\n",num,(i+1),table[i]);
    }
    
    
    return 0;
}