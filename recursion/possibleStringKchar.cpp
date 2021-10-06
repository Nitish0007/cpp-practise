#include <iostream>
#include <string>

using namespace std;

void possibleString(char arr[], string prefix, int n, int k)
{
    if (k == 0)
    {
        cout << prefix << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newPrefix = prefix + arr[i];
        possibleString(arr, newPrefix, n, k - 1);
    }
}

int main()
{
    int n, k;
    //n: numbers of characters user want to enter
    //K: length of string
    cin >> n >> k;
    char set[n];
    for (int i = 0; i < n; i++)
    {
        cin >> set[i];
    }
    possibleString(set, " ", n, k);

    return 0;
}