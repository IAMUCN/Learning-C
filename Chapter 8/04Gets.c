#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st  no need to use scanf and it will take spaces

    printf("%s",st);        //does not add a new line 
   // puts(st);             // gives the cursor to a new line    no need to use printf
    printf("hey\n");
    
    
    return 0;
}