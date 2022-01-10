#include <iostream>
#include <string>

using namespace std;

void combinationOfStringDigits(string s, int i)
{
    if (i)
    {
        return;
    }

    // for (int i = 0; i <= s.length() - 1; i++)
    // {
    string ros = s.substr(i, 1);
    combinationOfStringDigits(ros, i + 1);
    // }
}

int main()
{
    string s;
    cin >> s;
    combinationOfStringDigits(s, 0) return 0;
}