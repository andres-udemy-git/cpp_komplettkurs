#include <iostream>

using std::cout;
using std::endl;

void print(int *zahl) {
    cout << zahl << endl;
}

void printPointer(int *zahl) {
    cout << "Pointer Inside: " << zahl << endl;
}

// Call by Value
void printAddress(int *zahl) {
    cout << "Address Inside: " << &zahl << endl;
}

// Call by Reference
void printAddress2(int *&zahl) {
    cout << "Address Inside: " << &zahl << endl;
}

int main() {
    int zahl = 4;
    // Pointer auf Variable zahl
    int *p_zahl = &zahl;
    // Pointer auf Adresse im Heap
    int *heap_ptr = new int{4};

    print(&zahl);
    print(p_zahl);
    print(heap_ptr);

    // Wert
    cout << *heap_ptr << endl;
    //Addresse auf dem Heap (Wo sich der Wert befindet)
    cout << heap_ptr << endl;
    // Addresse auf dem Stack (Wo die Addresse auf dem Heap gespeichert wird)
    cout << &heap_ptr << endl;

    printAddress(heap_ptr);
    cout << "Address Outside: " << &heap_ptr << endl;

    printAddress2(heap_ptr);
    cout << "Address Outside: " << &heap_ptr << endl;

    // Spiecher freigeben
    delete heap_ptr;
    heap_ptr = nullptr;

    return 0;
}

