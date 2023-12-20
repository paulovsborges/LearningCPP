#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "creditCardValidator/CreditCardValidator.h"
#include "ticTacToeGame/TicTacToeGame.h"
#include "amplitude/AmplitudeConversions.h"

using namespace std;

void walk(int steps) {
    //    iterative approach
//    for (int i = 0; i < steps; ++i) {
//        cout <<  "You take a step" << endl;
//    }

    //Recursive approach
    if (steps > 0) {
        cout << "You take a step" << endl;
        walk(steps - 1);
    }
}

int factorial(int startNumber) {
//Iterative approach
//    int result = 1;
//
//    for (int i = 1; i <= startNumber; ++i) {
//        result = result * i;
//    }
//
//    return result;

//recursive approach
// Slower and uses more memory
    if (startNumber > 1) {
        return startNumber * factorial(startNumber - 1);
    } else {
        return 1;
    }
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function template, seams like the generics???
template<typename T, typename U>

auto max(T x, U y) {
    return (x > y) ? x : y;
}

struct student {
    string name;
    double gpa;
    bool enrolled;
};

struct Car {
    string model;
    int year;
    string color;
};

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

void printCar(const Car car) {
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "color: " << car.color << endl;
    cout << "inside" << &car << endl;
}

void paintCar(Car &car, string color) {
    car.color = color;
}

enum ResponseType {
    success, error, unknown
};

ResponseType getRandomEnum() {
    srand(time(nullptr));
    int maxValue = 3;
    int minValue = 1;

    int result = (rand() % (maxValue - minValue + 1)) + minValue;

    switch (result) {
        case 1 :
            return success;
        case 2 :
            return error;
        default :
            return unknown;
    }
}

class Human {
public:
    string name;
    string occupation;
    int age;

    void eat() {
        cout << "This person is eating" << endl;
    }

    void drink() {
        cout << "This person is drinking" << endl;
    }

    void sleep() {
        cout << "This person is sleeping" << endl;
    }
};


class Student {

public:
    string name;
    int age;
    double gpa;

    Student(string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

};


class Pizza {
public:
    string topping1;
    string topping2;

    // Constructor overload

    Pizza() {
    }

    Pizza(string topping1) {
        this->topping1 = topping1;
    }

    Pizza(string topping1, string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

class Stove {

    // Getter and setter

public:

    Stove(int temperature) {
        set(temperature);
    }

    int getTemperature() {
        return temperature;
    }

    void set(int newTemp) {

        if (temperature < 0) {
            temperature = 0;
            return;
        }

        if (temperature >= 10) {
            temperature = 10;
            return;
        }

        temperature = newTemp;
    }

private:
    int temperature = 0;

};

//Inheritance

class Animal {
public:
    bool alive = true;

    void eat() {
        cout << "Is eating" << endl;
    }
};

class Dog : public Animal {

};

class Shape {
public:
    double area;
    double volume;
};

class Cube : public Shape {
public:
    double side;

    Cube(double side) {
        this->side = side;
        this->area = pow(side, 2) * 6;
        this->volume = pow(side, 3);
    }

};

class Sphere : public Shape {
public:
    double radius;

    const double PI = 3.14;

    Sphere(double radius) {
        this->radius = radius;
        this->area = 4.0 * PI * (pow(radius, 2));
        this->volume = (4 / 3.0) * PI * pow(radius, 3);
    }
};

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

    // [Row] [Column]
    string cars[][3] = {{"Mustang", "Raptor", "Focus"},
                        {"Camaro", "Silverado", "Sonic"}};

    // [Row] [Column]

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

    // * dereference operator

    string name = "Bla";
    string *pName = &name;

    int age = 21;
    int *pAge = &age;

    string pizzas[] = {
            "Pizza 1",
            "Pizza 2",
            "Pizza 3",
            "Pizza 4",
            "pizza 5"
    };

    string *pPizzas = pizzas;


    cout << pName; // Access the reference
    cout << *pName; // Access the value inside of this reference

    cout << endl;

    cout << *pAge;

    cout << endl;

    cout << "Free pizzas " << pPizzas << endl;
    cout << "Free pizzas " << *pPizzas << endl;
    cout << "Free pizzas " << pPizzas[1] << endl;

    // nullptr - null pointer literal

    int *pointer = nullptr;

    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        cout << "Pointer not assigned";
    } else {
        cout << "Pointer assigned" << endl;
        cout << *pointer;
    }

    TicTacToeGame game;
    game.start();

    //Dynamic memory =============

    int *pNum = nullptr;

    pNum = new int;
    *pNum  = 21;

    cout << "Address : "<< pNum << endl;
    cout << "Value : "<< *pNum << endl;

    delete pNum;

    cout << "Address after delete : "<< pNum << endl;

    char *pGrade = nullptr;

    int size;

    cout << "How much?" << endl;

    cin >> size;

    pGrade = new char[size];

    for (int i = 0; i < size; ++i) {
        cout << "Enter grade # " << i + 1 << ": " << endl;
        cin  >> pGrade[i];
    }

    for (int i = 0; i < size; ++i) {
        cout << pGrade[i] << " - ";
    }

    // Deallocate memory
    delete pGrade;

    //Recursion
    walk(100);

    cout << factorial(10);

// Function template =========

    cout << max(1, 2.2);

//Structs

    student student1;
    student1.name = "Sponge bob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;


    Car car1;
    car1.model = "Tesla";
    car1.year = 2020;
    car1.color = "silver";

    Car car2;
    car2.model = "Opala";
    car2.year = 1969;
    car2.color = "orange";

    cout << "Outside" << &car2 << endl;
    printCar(car2);

    paintCar(car2, "black");

    cout << "New color is" << car2.color;

    // ENUMS ===========

    ResponseType response = getRandomEnum();

    switch (response) {
        case success:
            cout << "Success response" << endl;
            break;
        case error:
            cout << "Error response" << endl;
            break;
        case unknown:
            cout << "Unknown response" << endl;
            break;
    }

    //OOP =============

    Human human1;

    human1.name = "Patrick";
    human1.occupation = "dont know";
    human1.age = 21;

    human1.drink();

    Student student1("patrick", 25, 3.2);

    Sphere sphere(5);

    Cube cube(10);
    cout << sphere.area << endl;
    cout << sphere.volume << endl;

    int16_t a; // Signed int with fixed width == 2 bytes with 8 bit in width -> signed can store both negative and positive value
    uint16_t b; // Unsigned int with fixed width == 2 bytes with 8 bit in width -> unsigned can store only positive values

    unsigned char c = 'c';
    auto d = static_cast<int>(c);

    cout << d;

    unsigned char usersChar;

    cout << "Enter a number";

    int charAsc;

    cin >> usersChar;

    charAsc = static_cast<int>(usersChar);

    cout << "You chose the letter '" << usersChar << "' and the corresponding value in ASCII is "<< charAsc << endl;

    // constant expression - will force the compiler to not perform any optimization on this variable and will consider as a compile time constant
    constexpr int constantExpression = 2;

    //If we try to initialize the variable with a non-constant expression, the compiler will throw an error
    constexpr int t = max(1, 2);
*/

    // Amplitudes conversions
    auto converter = new AmplitudeConverter(-30.f, 0.0316228f);
    float db = converter->fromAmplitudeToDb();
    float amplitude = converter->fromDbToAmplitude();

    cout << converter->amplitude << " of amplitude is equal to " << db << " Db" << endl;
    cout << converter->db << " db is equal to " << amplitude << " in amplitude";

    return 0;
}