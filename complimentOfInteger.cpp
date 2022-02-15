#include <iostream>

using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int m = n;
        int mask = 0;
        int compliment;
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        compliment = (~n) & mask;
        return compliment;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution s;
    int sol = s.bitwiseComplement(n);
    cout << sol;
    return 0;
}