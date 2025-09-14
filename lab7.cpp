#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string* arr, int size) {
    string* reversedArr = new string[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i];
    }
    return reversedArr;
}

void displayArray(string* arr, int size) {
    cout << "Array contents:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\n";
    }
}