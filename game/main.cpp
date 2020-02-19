#include "game.h"

using std::cout;
using std::cin;
using std::endl;

#define YES 'y'

int main() {
    char repeat;

    do {
        game();
        cout << "Another game? (y/n) ";
        cin >> repeat;
        repeat = tolower(repeat);
    } while (repeat == YES);

    cout << "\033[2J\033[1;1H";
    return 0;
}