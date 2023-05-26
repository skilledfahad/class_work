#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int playerScore = 0;
int computerScore = 0;

void incrementPlayerScore() {
    playerScore++;
}

void incrementComputerScore() {
    computerScore++;
}

void displayScores() {
    printf("Player: %d | Computer: %d\n", playerScore, computerScore);
}

void determineWinner() {
    if (playerScore > computerScore) {
        printf("Congratulations! You win the game!\n");
    } else if (playerScore < computerScore) {
        printf("Sorry! Computer wins the game!\n");
    } else {
        printf("It's a tie!\n");
    }
}

int main() {
    int playerChoice, computerChoice;

    srand(time(NULL)); // Seed the random number generator

    printf("Rock, Paper, Scissors Game\n");

    while (1) {
        printf("Enter your choice (1 - Rock, 2 - Paper, 3 - Scissors, 0 - Quit): ");
        scanf("%d", &playerChoice);

        if (playerChoice == 0) {
            break;
        }

        computerChoice = (rand() % 3) + 1;

        printf("You chose: ");
        switch (playerChoice) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
            default:
                printf("Invalid choice\n");
                continue;
        }

        printf("Computer chose: ");
        switch (computerChoice) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
        }

        if (playerChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if (
            (playerChoice == ROCK && computerChoice == SCISSORS) ||
            (playerChoice == PAPER && computerChoice == ROCK) ||
            (playerChoice == SCISSORS && computerChoice == PAPER)
        ) {
            printf("You win!\n");
            incrementPlayerScore();
        } else {
            printf("Computer wins!\n");
            incrementComputerScore();
        }

        displayScores();
    }

    determineWinner();

    return 0;
}
