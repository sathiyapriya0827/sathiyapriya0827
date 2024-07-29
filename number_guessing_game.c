#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int guess, number, attempts = 0;
    const int max_attempts = 5;
    int found = 0; // Flag to track if the number is found
    // Initialize random number generator
    srand(time(NULL));
    // Generate random number between 1 and 100
    number = rand() % 100 + 1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");
    do {
        printf("Enter your guess (Attempt %d/%d): ", attempts + 1, max_attempts);
        scanf("%d", &guess);
        attempts++;
        // Compare guess with the random number
        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            found = 1; // Set found flag to true
            break;
        }
    } while (attempts < max_attempts);
    // Check if the number was found
    if (found) {
        printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
    } else {
        printf("Sorry, you ran out of attempts. The number was %d.\n", number);
    }
    return 0;
}
