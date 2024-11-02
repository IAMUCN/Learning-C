#include <stdio.h>
//Write a function to convert Celsius temperature into Fahrenheit.
float celsius_to_fahrenheit(float a) {
    return (9.0 / 5.0) * a + 32.0;
}

float fahrenheit_to_celsius(float a) {
    return (5.0 / 9.0) * (a - 32.0);
}

int main() {
    float c = 100;
    printf("The value of %.2f in Fahrenheit is %.2f\n", c, celsius_to_fahrenheit(c));
    return 0;
}

