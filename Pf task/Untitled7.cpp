#include <iostream>
using namespace std;

int main() {
    double t1, t2, t3;

    cout << "Enter time of runner 1: ";
    cin >> t1;

    cout << "Enter time of runner 2: ";
    cin >> t2;

    cout << "Enter time of runner 3: ";
    cin >> t3;

    int first, second, third;

    // Finding first place
    if (t1 <= t2 && t1 <= t3) {
        first = 1;
        if (t2 <= t3) {
            second = 2;
            third = 3;
        } else {
            second = 3;
            third = 2;
        }
    }
    else if (t2 <= t1 && t2 <= t3) {
        first = 2;
        if (t1 <= t3) {
            second = 1;
            third = 3;
        } else {
            second = 3;
            third = 1;
        }
    }
    else {
        first = 3;
        if (t1 <= t2) {
            second = 1;
            third = 2;
        } else {
            second = 2;
            third = 1;
        }
    }

    cout << "\nResults:" << endl;
    cout << "1st place: Runner " << first << endl;
    cout << "2nd place: Runner " << second << endl;
    cout << "3rd place: Runner " << third << endl;

    return 0;
}
