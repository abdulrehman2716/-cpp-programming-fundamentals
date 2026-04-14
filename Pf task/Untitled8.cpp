#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        double radius, area;
        const double pi = 3.14159;

        cout << "Enter radius of circle: ";
        cin >> radius;

        area = pi * radius * radius;

        cout << "Area of Circle = " << area << endl;
    }
    else if (choice == 2) {
        double length, width, area;

        cout << "Enter length of rectangle: ";
        cin >> length;

        cout << "Enter width of rectangle: ";
        cin >> width;

        area = length * width;

        cout << "Area of Rectangle = " << area << endl;
    }
    else if (choice == 3) {
        double base, height, area;

        cout << "Enter base of triangle: ";
        cin >> base;

        cout << "Enter height of triangle: ";
        cin >> height;

        area = 0.5 * base * height;

        cout << "Area of Triangle = " << area << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
