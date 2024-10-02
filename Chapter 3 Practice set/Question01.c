#include<stdio.h>
int main(){
    int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); 
// I say the out put will be I am not 11  
// WRONG 😓 the output will be I am 11 BECAUSE   
// (a=11) here we are assigning 11 to a and in that if we have given a non zero value 
//so if will print the true statement, we have to use == rational operators .  
     return 0;
}