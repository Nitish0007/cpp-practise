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
            char ch = 'A' - 1;
            ch = row + col - 1 + ch;
            cout << ch << " ";
            ++col;
        }
        cout << endl;
        ++row;
    }

    return 0;
}

// Output  for n=3
//  A B C
//  B C D
//  C D E