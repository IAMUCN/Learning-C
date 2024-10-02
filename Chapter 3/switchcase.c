#include<stdio.h>

int main(){
    int a = 6;
    printf("Enter a \n");
    scanf("%d",&a);
    
    switch(a){
        // in switch case statements if you don't use break statements then the entire case will be executed 
        // for eg if i type 1 here then  1,2 and 3 and 4 all will be executed
        case 1 :
        printf("You entered 1");
         case 2 :
        printf("You entered 2");
         case 3 :
        printf("You entered 3");
        break;
         // after adding the break statements the code executes and stops 
        // i.e if i type 1 here code 1,2,3 will be executed while 4 will not.
        // here you can also use character values like case 'A' 
         case 4 :
        printf("You entered 4");
        default: 
        printf("Nothing matched");
    }


     return 0;
}