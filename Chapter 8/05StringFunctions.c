#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
   // printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st); // target now contains "harry"
   // printf("%s , %s \n", target, st);

    char s1[] = "hello";
    char s2[] = "harry";
    char s3[] = "bhai";
    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
   // printf("%s\n",s1);
    
   // printf("%s %s %s\n",s1,s2,s3);

   int a = strcmp("far","joke"); /* returns zero if two strings are equal, & 
   if there is a mismatch it returns a -ve value 
   if the ASCII value of mismatching character of first string is less than the second string's mismatching corresponding character
  
  for example 
    strcmp("far", "joke");    // Negative value 
    strcmp("joke", "far");     // Positive value 
    you can remember this as    DJ is negative 
*/
   printf("%d\n",a);
    return 0;
}