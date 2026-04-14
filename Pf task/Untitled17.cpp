#include <iostream>
using namespace std;

int main() {
    int choice;
    double price;

    cout << "Select headphone type:" << endl;
    cout << "1. Noise Canceling" << endl;
    cout << "2. Wireless" << endl;
    cout << "3. Wired Budget" << endl;

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        price = 249.00;
        cout << "Price = $" << price << endl;
    }
    else if (choice == 2) {
        price = 199.00;
        cout << "Price = $" << price << endl;
    }
    else if (choice == 3) {
        price = 49.00;
        cout << "Price = $" << price << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
