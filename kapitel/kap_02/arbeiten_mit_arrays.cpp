#include <iostream>

using std::cout;
using std::endl;

int main() {
    int m[3][2] =
    {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int sum[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i] += m[i][j];
        }

        cout << sum[i] << endl;
    }

    return 0;
}