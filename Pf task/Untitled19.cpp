#include <iostream>
using namespace std;

int main() {
    int package;
    double gbUsed, bill = 0, extraGB;

    cout << "Select your package:" << endl;
    cout << "1. Package 1 ($39.99 - 4GB, $10 per extra GB)" << endl;
    cout << "2. Package 2 ($59.99 - 8GB, $5 per extra GB)" << endl;
    cout << "3. Package 3 ($69.99 - Unlimited data)" << endl;

    cout << "Enter package number (1-3): ";
    cin >> package;

    cout << "Enter data used (GB): ";
    cin >> gbUsed;

    if (package == 1) {
        bill = 39.99;

        if (gbUsed > 4) {
            extraGB = gbUsed - 4;
            bill = bill + (extraGB * 10);
        }
    }
    else if (package == 2) {
        bill = 59.99;

        if (gbUsed > 8) {
            extraGB = gbUsed - 8;
            bill = bill + (extraGB * 5);
        }
    }
    else if (package == 3) {
        bill = 69.99; // unlimited data, no extra charges
    }
    else {
        cout << "Invalid package selected!" << endl;
        return 0;
    }

    cout << "Total monthly bill = $" << bill << endl;

    return 0;
}
