#include<stdio.h>
//  Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
//  earth. Consider g = 9.8m/s2.
float force (float m);
float force (float m){
  // Force = mass X acceleration 
    return m * 9.8;
}

int main(){
    float m = 100; // in kilograms 
    printf("The value of force exerted on that body having mass %.2f is %.2f\n",m,force(m));
     return 0;
}