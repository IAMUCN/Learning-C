#include<stdio.h>

int main(){
  char input;
  printf("Enter A character : \n");
  scanf("%c",&input);
  if(97<=input&&input<=122){
    printf("Your character is in LowerCase");
  }
  else{
    printf("Your input is not in LowerCase");
  }
     return 0;
}