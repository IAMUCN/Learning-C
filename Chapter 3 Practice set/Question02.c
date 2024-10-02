#include <stdio.h>
int main() {
    float full, sub1, sub2, sub3;
    printf("Enter the full mark of each subject: \n");
    scanf("%f", &full);
    printf("Enter the mark of subject 1: \n");
    scanf("%f", &sub1);
    printf("Enter the mark of subject 2: \n");
    scanf("%f", &sub2);
    printf("Enter the mark of subject 3: \n");
    scanf("%f", &sub3);
    printf("Your marks are %f , %f & %f\n",sub1,sub2,sub3);
    if(sub1<33||sub2<33||sub3<33){
        printf("You have failed due to less marks in individual subject(s)\n");
    }
    else if ((sub1+sub2+sub3)/3<40)
    {
        printf("You have failed due to less Overall percentage\n");
    }
    else{
        printf("You have passed the examination\n");
    }    
        return 0;
}
