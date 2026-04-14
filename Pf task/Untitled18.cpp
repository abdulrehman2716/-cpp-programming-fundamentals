#include <iostream>
using namespace std;

int main() {
    int choice;
    int months;
    double total = 0;

    cout << "Health Club Membership Menu" << endl;
    cout << "1. Standard Adult Membership (Rs. 40/month)" << endl;
    cout << "2. Child Membership (Rs. 20/month)" << endl;
    cout << "3. Senior Citizen Membership (Rs. 30/month)" << endl;
    cout << "4. Quit the Program" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter number of months: ";
        cin >> months;

        total = months * 40.0;
        cout << "Total amount to pay = Rs. " << total << endl;
    }
    else if (choice == 2) {
        cout << "Enter number of months: ";
        cin >> months;

        total = months * 20.0;
        cout << "Total amount to pay = Rs. " << total << endl;
    }
    else if (choice == 3) {
        cout << "Enter number of months: ";
        cin >> months;

        total = months * 30.0;
        cout << "Total amount to pay = Rs. " << total << endl;
    }
    else if (choice == 4) {
        cout << "Program exited." << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
