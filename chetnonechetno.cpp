#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a % 2 == 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}