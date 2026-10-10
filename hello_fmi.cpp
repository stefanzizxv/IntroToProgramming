#include <iostream>
using namespace std;

int main() {
    
   cout <<"Hello, FMI" << endl;
   cout <<"Bye world!" << endl;

   cout << "\n";
   cout << "";

   for (int i = 1; i<=3; i++){
    for (int j=0; j<=3 - i; j++){
        cout << " ";
    }

    for (int j=1; j<= 2*i -1; j++){
        cout<<"*";
    }

    cout << endl;

   }
}