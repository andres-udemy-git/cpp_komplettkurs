#include <iostream>

int ggt(int a, int b) {
    int kleinereZahl;
    if (a > b)
        kleinereZahl = b;
    else
        kleinereZahl = a;
    for (int i = kleinereZahl; i > 0; i--) {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 0;
}

int ggtRecursive(int a, int b) {
    if (b == 0)
        return a;
    else
        return ggtRecursive(b, a % b);
}

int main() {
    int a = 36;
    int b = 24;

    std::cout << "ggt(" << a << "," << b << ") = " << ggt(a, b) << std::endl;
    std::cout << "ggtRecursive(" << a << "," << b << ") = " << ggtRecursive(a, b) << std::endl;
    return 0;
}