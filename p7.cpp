#include <iostream>
using namespace std;

int main() {
    int n = 5;      // number of rows
    char ch = 'A';  // starting character

    for (int i = 1; i <= n; i++) {       // rows
        for (int j = 1; j <= i; j++) {   // columns
            cout << ch << " ";
        }
        cout << endl;
        ch++;   // move to next alphabet after each row
    }

    return 0;
}
