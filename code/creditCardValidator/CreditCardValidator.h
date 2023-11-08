#include <iostream>


class CreditCardValidator {

public:
    void validate(std::string cardNumber, std::string &result);

private:
    static int getDigit(int number);

    static int sumOddDigits(std::string cardNumber);

    static int sumEvenDigits(std::string cardNumber);
};
