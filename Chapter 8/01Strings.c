#include<stdio.h>

int main(){
    // char st[] = {'a','b','c','\0'};
   // printf("First character is %c\n",st[3]);   // it wil print a null character
    char st[] = "abc"; // same as doing    char st[] = {'a','b','c','\0'};

    for (int i = 0; i <=3; i++)
    {
        printf("The character is %c\n",st[i]);
        
    }
    
    return 0;
}