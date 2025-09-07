#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // stars and hollow inside
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";  // border
            } else {
                cout << " ";  // hollow inside
            }
        }
        cout << endl;
    }

    return 0;
}
