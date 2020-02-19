#include <iostream>

using std::cout;
using std::endl;

int main() {

    char name[] = {"Andre"};

    int length = sizeof(name) / sizeof(char);

    cout << "Der Name " << name << " hat " << length << " Buchstaben." << endl;

    for (int i = 0; i < length; i++) {
        if (name[i] == '\0')
            cout << "Stringende gefunden an Index " << i << endl;
    }

    return 0;
}