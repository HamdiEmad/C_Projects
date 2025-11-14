#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 0
#define PAPER 1
#define SCISSORS 2

const short choices[] = {ROCK, PAPER, SCISSORS};

int main()
{
    srand(time(NULL));
    short computer_choice = rand() % 3;
    short user_choice;
    printf("Enter your choice (0: Rock, 1: Paper, 2: Scissors): ");
    scanf("%hd", &user_choice);
    printf("Computer chose: %hd\n", choices[computer_choice]);
    if (user_choice == computer_choice)
    {
        printf("It's a tie!\n");
    }
    else if ((user_choice == ROCK && computer_choice == SCISSORS) ||
             (user_choice == PAPER && computer_choice == ROCK) ||
             (user_choice == SCISSORS && computer_choice == PAPER))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}