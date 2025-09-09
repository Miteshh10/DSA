#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    int og = num; // store original number

    while (num > 0)
    {
        int digit = num % 10;         // get last digit
        rev = rev * 10 + digit;       // build reversed number
        num = num / 10;               // remove last digit
    }

    if (og == rev)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not a Palindrome Number" << endl;
    }

    return 0;
}
