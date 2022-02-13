#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.length() - 1;
    bool isPal = false;
    if (len == 0)
        return true;
    for (int i = 0, j = len; i <= len / 2; ++i, --j)
    {
        if (s[i] == s[j])
        {
            isPal = true;
            continue;
        }
        else
        {
            isPal = false;
            break;
        }
    }
    if (!isPal)
        return false;
    else
        return true;
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n);
    return 0;
}