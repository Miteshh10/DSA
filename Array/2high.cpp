#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element (all elements equal or only one element)." << endl;
    } else {
        cout << "Second largest number in array is: " << second << endl;
    }

    return 0;
}
