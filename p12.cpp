// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n = 5;

// //     for (int i = 1; i <= n; i++)
// //     {

// //         for (int s = 1; s <= n - i; s++)
// //         {
// //             cout << " ";
// //         }

// //         for (int j = 1; j <= i; j++)
// //         {
// //             cout << "*";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=0;i<n;i++){
//         //space
//         for(int s=1;s<n-i;s++){
//             cout<<" ";
//         };

//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         };
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int i, j, s;

    for (i = 0; i < n; i++)
    {
        for (s = 1; s < n - i; s++)
        {
            cout << " ";
        }

        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}