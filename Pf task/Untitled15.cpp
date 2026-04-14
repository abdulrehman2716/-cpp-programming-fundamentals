#include <iostream>
using namespace std;

int main() {
    double sales, commission;

    cout << "Enter sales amount: ";
    cin >> sales;

    if (sales <= 10000) {
        commission = 0.10;
    }
    else if (sales <= 15000) {
        commission = 0.15;
    }
    else {
        commission = 0.20;
    }

    cout << "Commission rate = " << commission << endl;

    return 0;
}
