#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int zahl;

    cout << "Gib eine Zahl zwischen 1 und 10 ein" << endl;

     cin >> zahl;

     if ( zahl == 4) {
         cout << "Gewonnen!" << endl;
     } else {
         cout << "Verloren!" << endl;
     }

    return 0;
}
