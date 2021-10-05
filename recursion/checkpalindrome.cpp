#include <iostream>
#include <string>

using namespace std;

void checkPalindrome(string s, int start, int end)
{
    if (start == end)
    {
        cout << "It is a palindrome" << endl;
        return;
    }
    if (s[start] == s[end])
    {
        return checkPalindrome(s, start + 1, end - 1);
    }
    cout << "it is not a palindrome" << endl;
}

int main()
{
    string s;
    cin >> s;
    checkPalindrome(s, 0, s.length() - 1);
    return 0;
}
