#include <stdio.h>
#include <math.h>

int main() {
    int side;
    double area;

    printf("Enter the side of the square: ");
    scanf("%d", &side);

    // Calculating the area using the pow function
    area = pow(side, 2);  // side ^2
    // pow function returns a double (minute detail but important) 

    printf("Area of the square with side %d is: %.2f\n", side, area);

    return 0;
}
