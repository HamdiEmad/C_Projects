#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROCK 0
#define PAPER 1
#define SCISSORS 2

const char *choices[] = {" ROCK   ", " PAPER  ", "SCISSORS"};

void GUI();
void game(short user_choice);

#endif // FUNCTIONS_H