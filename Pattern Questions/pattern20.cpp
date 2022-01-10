#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int counter = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            if (col <= n - row)
            {
                cout << "  ";
            }
            else
            {
                cout << counter << " ";
                ++counter;
            }
            ++col;
        }
        cout << endl;
        ++row;
    }

    return 0;
}

// Output for n=5
//       1
//     2 3
//   4 5 6
// 7 8 9 10
