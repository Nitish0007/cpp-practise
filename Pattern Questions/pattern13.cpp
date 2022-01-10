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
        while (col <= row)
        {
            char ch = (n - row + col + 'A' - 1);
            cout << ch << " ";
            ++col;
        }
        cout << endl;
        ++row;
    }

    return 0;
}

// Output for n= 4
// D
// C D
// B C D
// A B C D