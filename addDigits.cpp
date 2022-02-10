#include <iostream>

using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        int sum = 0;
        int temp = num;
        if (num > 9)
        {
            while (temp != 0)
            {
                int digit = temp % 10;
                sum += digit;
                temp = temp / 10;
            }
            if (sum > 9)
                return addDigits(sum);
            return sum;
        }
        else
            return num;
    }
};

int main()
{
    Solution s;
    cout << s.addDigits(78);
    return 0;
}
