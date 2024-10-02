#include<stdio.h>

int main(){
    float radius ,height;
    printf("Enter the radius of the circle and height \t");
    scanf("%f %f",&radius ,&height);
    
    printf("The Volume of the cylinder having radius %f and height %f is %f",radius,height ,3.14*radius*radius*height);
    return 0;
}
