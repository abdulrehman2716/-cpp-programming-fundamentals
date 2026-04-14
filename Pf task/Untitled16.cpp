#include <iostream>
using namespace std;

int main() {
    double balance, checkFee = 0, totalFee;
    int checks;

    const double monthlyFee = 10;
    const double lowBalanceCharge = 15;

    cout << "Enter beginning balance: ";
    cin >> balance;

    cout << "Enter number of checks written: ";
    cin >> checks;

    // Check fee calculation
    if (checks < 20) {
        checkFee = checks * 0.10;
    }
    else if (checks < 40) {
        checkFee = checks * 0.08;
    }
    else if (checks < 60) {
        checkFee = checks * 0.06;
    }
    else {
        checkFee = checks * 0.04;
    }

    totalFee = monthlyFee + checkFee;

    // Low balance penalty
    if (balance < 400) {
        totalFee += lowBalanceCharge;
    }

    cout << "Total bank service fees = $" << totalFee << endl;

    return 0;
}
