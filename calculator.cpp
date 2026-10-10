#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cout << "Choose two numbers: ";
    cin >> a >> b;

    int sum = a + b;
    cout << "Sum: " << sum << endl;

    int difference = a - b;
    cout << "Difference: " << difference << endl;

    int product = a * b;
    cout << "Product: " << product << endl;

    int quotient = a / b;
    cout << "Quotient: " << quotient << endl;

    int remainder = a % b;  
    cout << "Remainder: " << remainder << endl;

    double real_quotient = static_cast<double>(a) / b;
    cout << "Real Quotient: " << real_quotient << endl;
    
    return 0;
}