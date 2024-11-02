#include<stdio.h>

int main(){
    char st[4];
    scanf("%s",st); // here we can write &st because & is address of operator but in an array the name is the address
    printf("%s\n",st);
    
    return 0;
}