//
// Created by andre on 27.10.19.
//
#include "game.h"

#define SLEEP_TIME 5 * 100000
#define START_POS 0
#define LEN_X 10

#define PLAYER_SYMBOL 'P'
#define START_END_SYMBOL '|'
#define EMPTY_SYMBOL '_'
#define LEFT 'a'
#define RIGHT 'd'

using std::cout;
using std::cin;
using std::endl;


void printWithSleep(std::string message, int time) {
    cout << message << endl;
    usleep(time);
}

void printWithSleep(std::string message) {
    printWithSleep(message, SLEEP_TIME);
}

void printGameState(unsigned int playerPos) {
    cout << "\033[2J\033[1;1H";

    char gameState[LEN_X];

    for (unsigned int i = 0; i < LEN_X; i++) {
        gameState[i] = EMPTY_SYMBOL;
    }

    gameState[START_POS] = START_END_SYMBOL;
    gameState[LEN_X - 1] = START_END_SYMBOL;
    gameState[playerPos] = PLAYER_SYMBOL;

    cout << gameState;
}

unsigned int executeMove(unsigned int playerPos, char move) {
    if (move == LEFT) {
        if (playerPos > 0) {
            playerPos--;
        }
        else {
            printWithSleep("You bounced");
        }
    } else if (move == RIGHT)
    {
        if (playerPos < LEN_X - 1) {
            playerPos++;
        }
        else {
            printWithSleep("You bounced");
        }
    }
    else {
        printWithSleep("Unrecognized move");
    }
    return playerPos;
}

bool hasWon(unsigned int playerPos, unsigned int goal) {
    return playerPos == goal;
}

void game() {
    unsigned int playerPos, goal;
    char move;

    playerPos = START_POS;
    goal = LEN_X - 1;

    printGameState(playerPos);

    while (!hasWon(playerPos, goal)) {
        cin >> move;
        playerPos = executeMove(playerPos, move);
        printGameState(playerPos);
    }
    cout << endl << "You won!" << endl;
}