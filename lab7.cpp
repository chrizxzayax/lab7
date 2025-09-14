#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string* arrrr, int sz) {
    for (int i = 0; i < sz / 2; i++){
        string temp = *(arrrr + i);
        *(arrrr + i) = *(arrrr + sz - 1 - i);
        *(arrrr + sz - 1 - i) = temp;
    }
    return arrrr;
}

void displayArray(string* arrrr, int sz) {
    for (int i = 0; i < sz; i++) {
        cout << *(arrrr + i) << " ";
    }
    cout << endl;
}