#include <iostream>
#include <ctime>
#include "functions.hpp"

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawBoard(spaces);

    while(running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        if(checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        if(checkTie(spaces)) {
            running = false;
            break;
        }
    };
};