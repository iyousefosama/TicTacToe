#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWin(char *spaces, char player);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    drawBoard(spaces);
};

void drawBoard(char *spaces) {
    std::cout << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |   " << spaces[2] << "\n";
    std::cout << "_____|_____|_____" << "\n"; 
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |   " << spaces[5] << "\n";
    std::cout << "_____|_____|_____" << "\n"; 
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |   " << spaces[8] << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "\n";
}

void playerMove(char *spaces, char player) {

}

void computerMove(char *spaces, char computer) {

}

bool checkWin(char *spaces, char player){
    return false;
}

bool checkTie(char *spaces){
    return false;
}