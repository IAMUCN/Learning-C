#include<stdio.h>
void stars (int a);
void stars (int a){
     for(int i = 1 ; i <= a ; i++,i++){
        for(int j = 1 ; j<=i; j++ ){
            printf("%c",'*');
        }
        printf("\n");
    }
}
int main(){
    stars(4);
     return 0;
}
