#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14;
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    double area = PI * r * r;
    cout << "The area of the circle is: " << area << endl;
    double perimeter = 2 * PI * r;
    cout << "The perimeter of the circle is: " << perimeter << endl;

    return 0;
}