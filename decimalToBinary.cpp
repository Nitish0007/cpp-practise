#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        n = -(n);

        for (int i = 31; i >= 0; --i)
        {
            int k = n >> i;
            if (i == 31)
            {
                cout << "1";
                continue;
            }
            // if (i == 0)
            // {
            // }
        }
    }
    else
    {

        string res = "";
        for (int i = 31; i >= 0; i--)
        {
            int k = n >> i;

            if (k & 1)
            {
                res += "1";
                cout << "1";
            }
            else
            {
                res += "0";
                cout << "0";
            }
        }
        uint_fast32_t binaryResult = stoi(res);
        cout << endl;
        cout << binaryResult;
    }

    return 0;
}

// another logic for converting positive decimal to binary

// int n=5;
// int ans = 0;
// int i=0;
// while(n!=0){
//     int bit = n&1;
//     ans = (bit * pow(10,i))+ans;
//     n=n>>1;
//     ++i;
// }
// cout<<ans;