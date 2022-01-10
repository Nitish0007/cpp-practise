#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char toPrint = ch + col - 1;
            cout << toPrint << " ";
            ++col;
        }
        cout << endl;
        ++row;
    }

    return 0;
}