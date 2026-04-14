#include <iostream>
using namespace std;

int main() {
    double mass, weight;
    const double g = 9.8;

    cout << "Enter mass of object: ";
    cin >> mass;

    weight = mass * g;

    cout << "Weight of object = " << weight << " newtons" << endl;

    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    }
    else if (weight < 10) {
        cout << "The object is too light." << endl;
    }

    return 0;
}
