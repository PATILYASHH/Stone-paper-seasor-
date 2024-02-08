#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateComputerChoice() {
    
    return rand() % 3;
}

void printChoices(int playerChoice, int computerChoice) {
    printf("You chose: ");
    switch (playerChoice) {
        case 0:
            printf("Stone\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    printf("Computer chose: ");
    switch (computerChoice) {
        case 0:
            printf("Stone\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }
}

void determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int playerChoice, computerChoice;
    
  
    srand(time(NULL));
    
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter your choice (0 for Stone, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &playerChoice);
    
   
    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice. Please choose between 0 and 2.\n");
        return 1;
    }
    
    
    computerChoice = generateComputerChoice();
    
    
    printChoices(playerChoice, computerChoice);
    
    
    determineWinner(playerChoice, computerChoice);
    
    return 0;
}