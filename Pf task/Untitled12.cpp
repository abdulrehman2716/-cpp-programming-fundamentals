#include <iostream>
using namespace std;

int main() {
    double income;
    int years;

    cout << "Enter annual income: ";
    cin >> income;

    cout << "Enter years at current job: ";
    cin >> years;

    if (income >= 35000.00 && years > 5) {
        cout << "You qualify for the special loan." << endl;
    } 
    else {
        cout << "You do not qualify for the special loan." << endl;
    }

    return 0;
}
