#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // spaces before stars
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // stars and hollow spaces
        for (int j = 1; j <=2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
//     *
//    * *
//   *   *
//  *     *
// *********