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

int main() {

    const int sz = 5;
    string* names = new string[sz];

    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    cout << "Original array: ";
    displayArray(names, sz);
    
    delete[] names;

    return 0;
}