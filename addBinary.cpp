#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinary(string a, string b)
{
    bool carry = false;
    string sum = "";
    string padding;
    int paddingLength = a.length() - b.length();
    for (int i = 0; i < paddingLength; ++i)
    {
        padding.push_back('0');
    }
    b = padding + b;
    cout << a << " " << b << endl;
    for (int i = a.length(); i > 0; --i)
    {
        cout << i << endl;
        if (a[i] == '1' && b[i] == '1')
        {
            if (carry == true)
            {
                sum.push_back('1');
                carry = true;
            }
            else
            {
                sum.push_back('0');
                carry = true;
            }
        }
        else if (a[i] == '0' && b[i] == '0')
        {
            if (carry == true)

                sum.push_back('1'),
                    carry = false;

            else

                sum.push_back('0'),
                    carry = false;
        }
        else if (a[i] != b[i])
        {
            if (carry == true)

                sum.push_back('0'),
                    carry = true;

            else

                sum.push_back('1'),
                    carry = false;
        }
        if (carry == true)
            sum.push_back('1');

        reverse(sum.begin(), sum.end());
    }
    return sum;
}

int main()
{
    string a, b;
    string sum;
    cin >> a >> b;
    if (a.size() >= b.size())
    {
        sum = addBinary(a, b);
    }
    else
    {
        sum = addBinary(b, a);
    }
    cout << sum << endl;

    return 0;
}