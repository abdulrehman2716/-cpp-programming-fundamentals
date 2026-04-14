#include <iostream>
using namespace std;

int main() {
    double sales;

    cout << "Enter sales amount: ";
    cin >> sales;

    if (sales > 50000) {
        sales = sales + (0.25 * sales) + 250;
    }

    cout << "Total sales = " << sales << endl;

    return 0;
}
