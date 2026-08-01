#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random, guess;
    int no_of_guesses = 0;
    srand(time(NULL));

    printf("Welcome to the world of guessing numbers\n");
    random = rand() % 100 + 1; // Generate a random number between 1 and 100

    do{
        printf("\nenter your guess:between (1-100): ");
        scanf("%d", &guess);
        no_of_guesses++;

        if(guess > random){
            printf("Your guess is too high!\n");
        }
        else if(guess < random){
            printf("Your guess is too low!\n");
        }
        else{
            printf("Congratulations! You guessed the number correctly in %d guesses!\n", no_of_guesses);
        }

    }while(guess != random);
    printf("Thank you for playing the game!\n");

    return 0;

}
