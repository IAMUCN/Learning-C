#include <stdio.h>
#include <string.h>
// study the code  , this code is generated by edge copilot 
int main() {
    char str1[6];
    char str2[6];

    printf("Enter first string (5 characters): ");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &str1[i]);
    }
    str1[5] = '\0';

    printf("Enter second string (5 characters): ");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &str2[i]);
    }
    str2[5] = '\0';

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}