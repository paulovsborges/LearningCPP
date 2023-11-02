#include <iostream>
#include <ctime>

char getUserChoice();

char getComputerChoice();

void showChoice(char choice);

void chooseWinner(char player, char computer);

int rockPaperScissorsGame() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice was ";
    showChoice(player);

    computer = getComputerChoice();

    std::cout << "The computer choice was ";

    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice() {

    char player;
    std::cout << "Rock paper scissors game" << std::endl;

    do {
        std::cout << "Choose one of the following" << std::endl;
        std::cout << "'r' for rock" << std::endl;
        std::cout << "'p' for paper" << std::endl;
        std::cout << "'s' for scissors" << std::endl;

        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice() {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        default:
            return 's';
    }
}

void showChoice(char choice) {

    std::string player;

    switch (choice) {
        case 'r':
            player = "Rock";
            break;
        case 'p':
            player = "Paper";
            break;
        default:
            player = "Scissors";
            break;
    }

    std::cout << player << std::endl;
}

void chooseWinner(char player, char computer) {

    std::cout << "And the winner is:" << std::endl;

    std::string winner;

    switch (player) {
        case 'r' :
            if (computer == 'r'){
                winner = "a tie";
                break;
            }

            if (computer == 'p'){
                winner = "computer";
                break;
            }

            if (computer == 's'){
                winner = "player";
                break;
            }

        case 'p':
            if (computer == 'r'){
                winner = "player";
                break;
            }

            if (computer == 'p'){
                winner = "a tie";
                break;
            }

            if (computer == 's'){
                winner = "computer";
                break;
            }

        default:
            if (computer == 'r'){
                winner = "computer";
                break;
            }

            if (computer == 'p'){
                winner = "player";
                break;
            }

            if (computer == 's'){
                winner = "a tie";
                break;
            }
    }

    std::cout << winner;

}