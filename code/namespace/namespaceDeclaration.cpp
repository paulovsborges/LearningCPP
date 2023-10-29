#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

// using namespace std;

using std::cout;
using std::endl;

int bla(){

    using namespace second;

    // :: scope resolution operator

    cout << first::x << endl;
    cout << x;

    return 0;
}