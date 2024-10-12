#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ // I used edge copilot to just give a snippet to generate a random number between 1 and 100;

    srand(time(0)); // Seed the random number generator with the current time
    int random_number = (rand() % 100) + 1;
    // till this is edge copilot generated  and the code below is written by me
    int user_num, no_of_guesses = 0;
    printf("Enter Your guessed number \t");
    do
    {
        scanf("%d", &user_num);
        if (random_number > user_num)
        {
            printf("Nope! guess a higher number.\n"); 
        }
        else if (random_number < user_num)
        {
            printf("Nope! guess a lower number.\n");
        }
        else
        {
            printf("   \"You guessed the number correctly\". \n");
        }
        no_of_guesses++;
    } while (random_number != user_num);

    printf("   Random number between 1 and 100 was : %d.\n", random_number);
    printf("   You guessed the number in %d guesses.\n", no_of_guesses);

    return 0;
}
