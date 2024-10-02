#include<stdio.h>

int main(){
    int a ;
    printf("Enter your percentage: \n");
    scanf("%d\n",&a);
    if (90<a<=100){
        printf("Your grade is \"O\" ");
    }
    else if (80<a<89)
    {
        printf("Your grade is \"E\" ");
    }
    else if (70<a<79)
    {
        printf("Your grade is \"A\" ");
    }
    else if (60<a<69)
    {
        printf("Your grade is \"B\" ");
    }
    else if (50<a<59)
    {
        printf("Your grade is \"C\" ");
    }
    else if (40<a<49)
    {
        printf("Your grade is \"D\" ");
    }
    else if (30<a<39)
    {
        printf("Your grade is \"F\" ");
    }
    else {
        printf("YOU HAVE FAILED THE EXAMINATION");
    }
     return 0;
}