#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            if (col < row)
            {
                cout << "  ";
            }
            else
            {
                cout << row << " ";
            }
            ++col;
        }
        cout << endl;
        ++row;
    }

    return 0;
}

// Output for n=5
// 1 1 1 1 1
//   2 2 2 2
//     3 3 3
//       4 4
//         5