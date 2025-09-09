#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr=new int [n]; // array of size n

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxNum = arr[0];  // assume first element is max

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];  // update max if bigger element found
        }
    }

    cout << "Highest number in array is: " << maxNum << endl;

    return 0;
}
