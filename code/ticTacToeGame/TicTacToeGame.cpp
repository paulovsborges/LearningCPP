# include <ctime>
#include <iostream>
#include "TicTacToeGame.h"

using namespace std;

void TicTacToeGame::start(){
    char spaces[] = {
            ' ',
            ' ',
            ' ',
            ' ',
            ' ',
            ' ',
            ' ',
            ' ',
            ' ',
    };

    char player = 'X';
    char computer = 'O';
    char winner = ' ';

    drawBoard(spaces);

    while (true) {
        playerMove(spaces, player);

        if (checkWinner(spaces, winner)) {
            break;
        }

        computerMove(spaces, computer);

        if (checkWinner(spaces, winner)) {
            break;
        }

        if (checkTie(spaces)) {
            break;
        }
        drawBoard(spaces);
    }

    drawBoard(spaces);

    if (winner == ' ') {
        cout << "There was a tie" << endl;
    } else {
        cout << "The winner is " << winner;
    }
}

void TicTacToeGame::drawBoard(char *spaces) {

    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  | " << spaces[1] << "   |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  | " << spaces[4] << "   |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  | " << spaces[7] << "   |  " << spaces[8] << "  " << endl;
    cout << endl;
}

void TicTacToeGame::playerMove(char *spaces, char player) {

    int number;

    do {
        cout << "Enter a number (1-9)";
        cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }

    } while (!number > 0 || !number < 8);
}

void TicTacToeGame::computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    bool checkEmptySpaces = checkTie(spaces);

    while (!checkEmptySpaces) {
        number = rand() % 9;

        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool TicTacToeGame::checkWinner(char *spaces, char &winner) {

    char board[3][3] = {
            {spaces[0], spaces[1], spaces[2]},
            {spaces[3], spaces[4], spaces[5]},
            {spaces[6], spaces[7], spaces[8]},
    };

    int rows = sizeof(board) / sizeof(board[0]);
    int columns = sizeof(board[0]) / sizeof(board[0][0]);

    bool anyRowsTheSame = false;

    for (int row = 0; row < rows; ++row) {

        bool anyRowsEmpty = board[row][0] == ' ' ||
                            board[row][1] == ' ' ||
                            board[row][2] == ' ';

        if (anyRowsEmpty) {
            continue;
        }

        anyRowsTheSame = board[row][0] == board[row][1] &&
                         board[row][1] == board[row][2];

        if (anyRowsTheSame) {
            winner = board[row][0];
        }
    }

    if (anyRowsTheSame) {
        return true;
    }

    bool anyColumnsTheSame = false;

    for (int column = 0; column < columns; ++column) {

        bool anyColumnEmpty = board[0][column] == ' ' ||
                              board[1][column] == ' ' ||
                              board[2][column] == ' ';

        if (anyColumnEmpty) {
            continue;
        }

        anyColumnsTheSame = board[0][column] == board[1][column] &&
                            board[1][column] == board[2][column];

        if (anyColumnsTheSame) {
            winner = board[0][column];
        }
    }

    if (anyColumnsTheSame) {
        return true;
    }

    bool anyDiagonalTheSameAndNotEmpty = spaces[0] == spaces[4] && spaces[4] == spaces[8]
                                         && spaces[0] != ' '
                                         && spaces[4] != ' '
                                         && spaces[8] != ' '
                                         ||
                                         spaces[6] == spaces[4] && spaces[4] == spaces[2]
                                         && spaces[6] != ' '
                                         && spaces[4] != ' '
                                         && spaces[2] != ' ';

    if (anyDiagonalTheSameAndNotEmpty) {
        winner = spaces[4];
        return true;
    }

    return false;
}

bool TicTacToeGame::checkTie(char *spaces) {
    int size = sizeof(spaces) / sizeof(spaces[0]);

    bool allElementsFilled= true;

    for (int i = 0; i < size; ++i) {

        if (spaces[i] == ' '){
            cout << "Found an element not filled" << endl;
            allElementsFilled = false;
            break;
        }

        cout << "+++++++++++++++++++++++" << endl;
    }

    return allElementsFilled;
}

