#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int formula = (a + b)*(a + b)*(a + b)*(a + b) - (a - b)*(a - b);
    cout << formula << endl;

    return 0;
}