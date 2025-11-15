#include "functions.h"

void game(short user_choice)
{
    srand(time(NULL));
    short computer_choice = rand() % 3;
    printf("    **************************************\n");
    printf("    *       Computer chose: %s     *\n", choices[computer_choice]);
    if (user_choice == computer_choice)
    {

        printf("    *             It's a tie!            *\n");
        printf("    **************************************\n\n");
    }
    else if ((user_choice == ROCK && computer_choice == SCISSORS) ||
             (user_choice == PAPER && computer_choice == ROCK) ||
             (user_choice == SCISSORS && computer_choice == PAPER))
    {
        printf("    *              You win!              *\n");
        printf("    **************************************\n\n");
    }
    else
    {
        printf("    *           Computer wins!           *\n");
        printf("    **************************************\n\n");
    }
}

void GUI()
{
    while (1)
    {
        short choice;
        printf("    **************************************\n");
        printf("    * Welcome to Rock, Paper, Scissors!  *\n");
        printf("    *         Make your choice:          *\n");
        printf("    *            0 - Rock                *\n");
        printf("    *            1 - Paper               *\n");
        printf("    *            2 - Scissors            *\n");
        printf("    *       Exit - Any other number      *\n");
        printf("    **************************************\n");
        scanf("%hd", &choice);
        if (choice < 0 || choice > 2)
        {
            printf("****************************************\n");
            printf("*      Exiting the game. Goodbye!      *\n");
            printf("****************************************\n");
            break;
        }
        game(choice);
    }
}