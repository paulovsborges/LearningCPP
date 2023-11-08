#include "CreditCardValidator.h"
#include <iostream>

using namespace std;

int CreditCardValidator::getDigit(int number) {
    return number % 10 + (number / 10 % 10);
}

int CreditCardValidator::sumOddDigits(std::string cardNumber) {

    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int CreditCardValidator::sumEvenDigits(std::string cardNumber) {

    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}

void CreditCardValidator::validate(string cardNumber, string &result) {

    // Luhn algorithm
    int sum = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (sum % 10 == 0) {
        result = "Valid";
    } else {
        result = "Not valid";
    }
}