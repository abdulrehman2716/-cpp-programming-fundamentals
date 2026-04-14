#include <iostream>
using namespace std;

int main() {
    int model;

    cout << "Which TV model do you want to purchase? (100, 200, 300): ";
    cin >> model;

    if (model == 300) {
        cout << "Features:" << endl;
        cout << "Picture-in-a-picture" << endl;
        cout << "Stereo sound" << endl;
        cout << "Remote control" << endl;
    }
    else if (model == 200) {
        cout << "Features:" << endl;
        cout << "Stereo sound" << endl;
        cout << "Remote control" << endl;
    }
    else if (model == 100) {
        cout << "Features:" << endl;
        cout << "Remote control only" << endl;
    }
    else {
        cout << "Invalid model selected." << endl;
    }

    return 0;
}
