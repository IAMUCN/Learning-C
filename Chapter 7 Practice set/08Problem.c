#include<stdio.h>
//  Repeat problem 7 for a custom input given by the user.
int main(){
    int num;
    int arr[10];
    printf("Enter number to get the table\n");
    scanf("%d",&num);

    for (int i = 0; i < 10; i++)
            {
                arr[i] = num * (i + 1);
            }
    printf("The table of %d is Below \n",num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",num,i + 1,arr[i]);
    }
    
    return 0;
}

