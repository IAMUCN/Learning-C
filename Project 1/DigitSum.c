#include <stdio.h>

int main() {
    // Sum of Digits: Write a program to calculate the sum of the digits of a given number.
    int sum = 0, temp, input, totaldigits = 0;
    printf("Enter Your number: ");
    scanf("%d", &input);

    temp = input;

    // To find the number of digits in the given number
    while (temp != 0) {
        temp /= 10;
        totaldigits++;
    }
    printf("Number of digits in the given number is %d\n", totaldigits);

    // Sum of the digits
    temp = input; 
    for (int j = 0; j < totaldigits; j++) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("The digital sum of your given number is %d\n", sum);
    return 0;
}
