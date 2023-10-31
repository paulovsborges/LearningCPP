#include <iostream>

using namespace std;

void showBalance(double balance);

double deposit(double amountToDeposit, double currentBalance);

double withdraw(double amountToWithDraw, double currentBalance);

void terminate();

int main() {

    double balance = 0;

    int choice = 0;

    do {
        cout << "Enter an operation" << endl;
        cout << "1 - show balance" << '\n'
             << "2 - deposit" << '\n'
             << "3 - withdraw" << '\n'
             << "4 - terminate" << endl;

        cin >> choice;

        switch (choice) {
            case 1 :
                showBalance(balance);
                break;
            case 2 :

                double amountToDeposit;

                cout << "Enter an amount to deposit" << endl;

                cin >> amountToDeposit;

                balance = deposit(amountToDeposit, balance);
                break;
            case 3 :
                double amountToWithDraw;

                cout << "Enter an amount to withdraw" << endl;

                cin >> amountToWithDraw;

                balance = withdraw(amountToWithDraw, balance);
                break;
            case 4 :
                ::terminate();
                break;
            default:
                cout << "Invalid operation, try again" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << balance << endl;
}

double deposit(double amountToDeposit, double currentBalance) {
    return currentBalance + amountToDeposit;
}

double withdraw(double amountToWithDraw, double currentBalance) {
    return currentBalance - amountToWithDraw;
}

void terminate() {
    cout << "See you later";
}