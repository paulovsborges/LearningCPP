//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//void doSomething(string name);
//void bakePizza();
//void bakePizza(string topping1);
//
//int myNum = 1;
//
//int main() {
//
///*
// *
// * << insertion stream operator
// * >> extraction stream operator
// *
// *
//    int x  = 10;
//    int z = x++; // z = 10 - x = 11
//    int y = ++x; // y = 11 - x = 11
//
//
//
//    double x = 10;
//    double y = 5;
//
//    double z = (x + 10) /  (3 * y);
//
//    std::cout << z;
//
//
//    int x = 10;
//
//    cout << "x = " << x << endl;
//    cout << "x = " << x << endl;
//
//    const double stateTax = .04;
//    const double countyTax = .02;
//    double sales = 95000;
//
//    double paidStateTax = sales * stateTax;
//    double paidCountyTax = sales * countyTax;
//
//    double totalPaidTax = paidStateTax + paidCountyTax;
//
//    double totalSales = sales - totalPaidTax;
//
//    cout << "state tax = " << paidStateTax << endl;
//    cout << "county tax = " << paidCountyTax << endl;
//    cout << "total paid in tax = " << totalPaidTax << endl;
//    cout << "final revenue = " << totalSales;
//
//    cout << "Enter values for x and y:";
//
//    int x;
//    int y;
//
//    cin >> x >> y;
//
//    cout << x + y;
//
//    cout << "Enter the temperature in F";
//
//    double fahrenheit;
//
//    cin >> fahrenheit;
//
//    double celsius = (fahrenheit-32) / 1.8;
//
//    cout << "result = " << celsius;
//
//    double result = pow(2, 3);
//
//    cout << result;
//
//    // Area of a circle
//
//    cout << "Enter a radius";
//
//    int r;
//
//    cin >> r;
//
//    const double PI = 3.14;
//
//    double area = PI * pow(r, 2);
//
//    cout << area;
//
//    double a = 99.99;
//    float b = 99.9F;
//    long c = 900000L;
//    char d = 'd';
//    bool e = false;
//    auto f = true;
//    auto g = 'a';
//
//    int binaryNumber = 0b11111111;
//    int hexadecimalNumber = 0xFF;
//
//    cout << binaryNumber << endl;
//    cout << hexadecimalNumber;
//
//
//    unsigned int number = -255;
//
//    cout << number;
//
//    srand(time(nullptr));
//
//    int number = rand();
//
//    cout << number;
//
//    // Roll dice
//
//    const short maxValue = 6;
//    const short minValue = 1;
//
//    srand(time(nullptr));
//
//    short first = (rand() % (maxValue - minValue + 1)) + minValue;
//    short second = (rand() % (maxValue - minValue + 1)) + minValue;
//
//    cout << first << ", " << second;
//
//    double correct = 20.31;
//    auto correctConverted = (int ) correct;
//
//    cout << correctConverted;
//
//    string name;
//
//    //Use it to support blank characters on the edges of the input
//    getline(cin, name);
//
//    cout << name;
//
//    double x = 3;
//    double y = 5;
//    double z;
//
//    z = max(x, y);
//
//    cout << z;
//
//    //Hypotenuse calculator
//
//    double a;
//    double b;
//    double c;
//
//    cout << "Enter the height of the triangle" << endl;
//    cin >> a;
//
//    cout << "Enter the length of the triangle" << endl;
//    cin >> b;
//
//    c = sqrt(pow(a, 2) + pow(b, 2));
//
//    cout << "The hypotenuse is " << c;
//
//    int age;
//
//    cout << "enter age";
//    cin >> age;
//
//    if (age >= 18) {
//        cout << "Ok";
//    } else {
//        cout << "Fuck off";
//    }
//
//    int month;
//
//    cout << "Enter a number" << endl;
//
//    cin >> month;
//
//    switch (month) {
//        case 1 :
//            cout << "January";
//            break;
//
//        case 2 :
//            cout << "February";
//            break;
//
//        default :
//            cout << "Unspecified";
//            break;
//    }
//
//    int grade = 50;
//
//    grade >= 60 ? cout << "Well done" : cout << "Trash";
//
//
//    string name = "blablabla";
//
//    cout << name.length() << endl;
//
//    cout << name.empty() << endl;
//
//    name.append("_ble");
//
//    cout << name << endl;
//
//    name.clear();
//
//    cout << name << endl;
//
//    name.insert(0,"@");
//
//    cout << name << endl;
//
//    name = "blebloblu";
//
//    name.erase(0, 3);
//
//    cout << name;
//
//    while(true){
//        cout << "Haha" << endl;
//    }
//
//
//    do {
//        cout << time(nullptr) << endl;
//    } while (true);
//
//    for (int i = 1; i <= 10; i++) {
//
//        if (i == 3){
//            continue;
//        }
//
//        if (i == 8){
//            break;
//        }
//
//        cout << i << endl;
//    }
//
//    cout << "Happy new year";
//
//    doSomething("ble");
//    bakePizza();
//
//    cout << ::myNum;
//*/
//
//    return 0;
//}
//
//void doSomething(string name) {
//    cout << "Hello"<< name << endl;
//}
//
//void bakePizza(){
//    cout << "There is your pizza";
//}
//
//void bakePizza(string topping1){
//    cout << "There is your pizza" << topping1;
//}