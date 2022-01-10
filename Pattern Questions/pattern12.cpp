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
            char ch = (row + col - 1 + 'A' - 1);
            cout << ch << " ";
            ++col;
        }
        cout << endl;
        ++row;
    }

    return 0;
}

// Output for n=5
// A
// B C
// C D E
// D E F G
// E F G H I