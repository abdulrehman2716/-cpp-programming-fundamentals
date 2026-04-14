#include <iostream>
using namespace std;

int main() {

    char ch;

    cout << "ASCII values of Alphabets:" << endl;

    for (ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " = " << (int)ch << endl;
    }

    cout << endl;

    for (ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " = " << (int)ch << endl;
    }

    return 0;
}
