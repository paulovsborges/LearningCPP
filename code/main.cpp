#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "creditCardValidator/CreditCardValidator.h"

using namespace std;

/*
int getTotal(int prices[], int size) {

    int total = 0;

    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}


// Pass by reference
void swap(string &x, string &y){
    string temp;

    temp = x;
    x = y;
    y = temp;
}

void constParameters(const string naming, const int age) {
    cout << naming << endl;
    cout << age << endl;
}
 */


int main() {

/*
 *
 * << insertion stream operator
 * >> extraction stream operator
 *
 *
    int x  = 10;
    int z = x++; // z = 10 - x = 11
    int y = ++x; // y = 11 - x = 11



    double x = 10;
    double y = 5;

    double z = (x + 10) /  (3 * y);

    std::cout << z;


    int x = 10;

    cout << "x = " << x << endl;
    cout << "x = " << x << endl;

    const double stateTax = .04;
    const double countyTax = .02;
    double sales = 95000;

    double paidStateTax = sales * stateTax;
    double paidCountyTax = sales * countyTax;

    double totalPaidTax = paidStateTax + paidCountyTax;

    double totalSales = sales - totalPaidTax;

    cout << "state tax = " << paidStateTax << endl;
    cout << "county tax = " << paidCountyTax << endl;
    cout << "getTotal paid in tax = " << totalPaidTax << endl;
    cout << "final revenue = " << totalSales;

    cout << "Enter values for x and y:";

    int x;
    int y;

    cin >> x >> y;

    cout << x + y;

    cout << "Enter the temperature in F";

    double fahrenheit;

    cin >> fahrenheit;

    double celsius = (fahrenheit-32) / 1.8;

    cout << "result = " << celsius;

    double result = pow(2, 3);

    cout << result;

    // Area of a circle

    cout << "Enter a radius";

    int r;

    cin >> r;

    const double PI = 3.14;

    double area = PI * pow(r, 2);

    cout << area;

    double a = 99.99;
    float b = 99.9F;
    long c = 900000L;
    char d = 'd';
    bool e = false;
    auto f = true;
    auto g = 'a';

    int binaryNumber = 0b11111111;
    int hexadecimalNumber = 0xFF;

    cout << binaryNumber << endl;
    cout << hexadecimalNumber;


    unsigned int number = -255;

    cout << number;

    srand(time(nullptr));

    int number = rand();

    cout << number;

    // Roll dice

    const short maxValue = 6;
    const short minValue = 1;

    srand(time(nullptr));

    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first << ", " << second;

    double correct = 20.31;
    auto correctConverted = (int ) correct;

    cout << correctConverted;

    string name;

    //Use it to support blank characters on the edges of the input
    getline(cin, name);

    cout << name;

    double x = 3;
    double y = 5;
    double z;

    z = max(x, y);

    cout << z;

    //Hypotenuse calculator

    double a;
    double b;
    double c;

    cout << "Enter the height of the triangle" << endl;
    cin >> a;

    cout << "Enter the length of the triangle" << endl;
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The hypotenuse is " << c;

    int age;

    cout << "enter age";
    cin >> age;

    if (age >= 18) {
        cout << "Ok";
    } else {
        cout << "Fuck off";
    }

    int month;

    cout << "Enter a number" << endl;

    cin >> month;

    switch (month) {
        case 1 :
            cout << "January";
            break;

        case 2 :
            cout << "February";
            break;

        default :
            cout << "Unspecified";
            break;
    }

    int grade = 50;

    grade >= 60 ? cout << "Well done" : cout << "Trash";


    string name = "blablabla";

    cout << name.length() << endl;

    cout << name.empty() << endl;

    name.append("_ble");

    cout << name << endl;

    name.clear();

    cout << name << endl;

    name.insert(0,"@");

    cout << name << endl;

    name = "blebloblu";

    name.erase(0, 3);

    cout << name;

    while(true){
        cout << "Haha" << endl;
    }


    do {
        cout << time(nullptr) << endl;
    } while (true);

    for (int i = 1; i <= 10; i++) {

        if (i == 3){
            continue;
        }

        if (i == 8){
            break;
        }

        cout << i << endl;
    }

    cout << "Happy new year";

    doSomething("ble");
    bakePizza();

    cout << ::myNum;

    string cars[] = {"Corvette", "AMG GT", "GT3 RS"};

    cars[0] = "Camaro";

    cout << cars[0] << endl;
    cout << cars[1] << endl;

    double prices[] = {5.60, 7.50, 99.99, 15.00};

    for (int i = 0; i <= sizeof(prices) / sizeof(double); i++) {
        cout << prices[i] << endl;
    }

    cout << sizeof(prices) << " Bytes" << endl;

    cout << sizeof(prices) / sizeof(double) << " elements in the array" << endl;

    string students[] = {"Spongebob", "Patrick", "Squirrel"};

    for(string student : students){
        cout << student << endl;
    }

    int prices[] = {1, 2, 3, 4};
    int size = sizeof(prices) / sizeof(prices[0]);
    int total = getTotal(prices, size);

    cout << "total " << total << endl;

    int numbers[10];

    fill(numbers, numbers + 10, 1);

    for(int n : numbers){
        cout << n << endl;
    }

    const int SIZE =  99 ;
    int portion = SIZE / 3;

    int numbers[99];

    // First portion
    fill(numbers, numbers + portion, 1);
    // Second portion
    fill(numbers + portion, numbers + (portion * 2), 2);
    // Third portion
    fill(numbers + (portion * 2), numbers + SIZE, 3);

    for (int n:numbers) {
        cout << n << endl;
    }


    // Multidimensional arrays

    // [Column] [Row]
    string cars[][3] = {{"Mustang", "Raptor", "Focus"},
                        {"Camaro", "Silverado", "Sonic"}};

    // [Column] [Row]

    int rows = sizeof (cars) / sizeof(cars[0]);
    int columns = sizeof (cars[0]) / sizeof (cars[0][0]);

    cout << cars[1][2] << endl;
    cout << "Rows " << rows << endl;
    cout << "Columns " << columns << endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {\
            cout << "Row " << i << " = " << cars[i][j] << endl;
        }
    }

    string name = "Blaaaaaa";

    // & = Address-of operator

    cout << &name;

    string x = "Hello";
    string y = "Goodbye";

    swap(x, y);

    cout << x << endl;
    cout << y << endl;

    string cardNumberSample = "6011000990139424";
    string result;

    CreditCardValidator validator;
    validator.validate(cardNumberSample, result);

    cout << result;
*/

    return 0;
}