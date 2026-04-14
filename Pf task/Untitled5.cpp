#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter numerator: ";
    cin >> num1;

    cout << "Enter denominator: ";
    cin >> num2;

    if (num2 != 0) {
        double result = num1 / num2;
        cout << "Division result is: " << result << endl;
    } else {
        cout << "Division by zero is not possible." << endl;
    }

    return 0;
}
