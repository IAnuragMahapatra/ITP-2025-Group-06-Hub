#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int side1, side2, side3;
    int max = (side1, side2, side3);

    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "A triangle is possible."<<endl;

        if (side1 == side2 && side2 == side3) {
            cout << "It is an equilateral triangle."<<endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "It is an isosceles triangle."<<endl;
        } else {
            cout << "It is a scalene triangle."<<endl;
        }
    } else {
        cout << "A triangle is not possible."<<endl;
    }

    return 0;
}