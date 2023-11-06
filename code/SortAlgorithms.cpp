#include <iostream>

// needs to include the iostream
using namespace std;

void bubbleSort() {

    int elements[] = {3, 9, 5, 7, 8, 2, 6, 4, 1, 10};
    int elementsSize = sizeof(elements) / sizeof(elements[0]);
    int temp;

    for (int i = 0; i < elementsSize - 1; ++i) {
        for (int j = 0; j < elementsSize - 1; ++j) {
            if (elements[j] > elements[j + 1]) {
                temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }

    cout << endl;

    for (int e: elements) {
        cout << e << endl;
    }
}
//
//int main() {
//
//    bubbleSort();
//
//    return 0;
//}