#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    cout << "Enter month (numeric form): ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter two-digit year: ";
    cin >> year;

    if (month * day == year) {
        cout << "The date is magic!" << endl;
    }
    else {
        cout << "The date is not magic." << endl;
    }

    return 0;
}
