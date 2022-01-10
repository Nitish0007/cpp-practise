#include <iostream>

using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             if (col <= n - row)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << col - n + row;
//             }
//             ++col;
//         }
//         while (col <= (2 * n - 1))
//         {
//             int count = row;
//             if (col > n && col < n + row)
//             {
//                 cout << count - 1;
//                 --count;
//             }
//             ++col;
//         }

//         cout << endl;
//         ++row;
//     }

//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            --space;
        }

        int j = 1;
        while (j <= row)
        {
            cout << j;
            ++j;
        }

        int start = row - 1;
        while (start)
        {
            cout << start;
            --start;
        }
        cout << endl;
        ++row;
    }

    return 0;
}

// Output for n=5
//      1
//     121
//    12321
//   1234321
//  123454321