#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findSum(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i)
            sum += nums[i];
        return sum;
    }
    vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
    {
        vector<int> answer;
        int sum1 = findSum(aliceSizes);
        int sum2 = findSum(bobSizes);

        int s2 = 0, e2 = bobSizes.size() - 1;
        int mid2 = s2 + (e2 - s2) / 2;
        for (int i = 0; i < aliceSizes.size(); ++i)
        {
            while (s2 <= e2)
            {
                if (aliceSizes[i] == bobSizes[mid2])
                    continue;
                int dummySum1 = sum1 - aliceSizes[i] + bobSizes[mid2];
                int dummySum2 = sum2 - bobSizes[mid2] + aliceSizes[i];
                if (dummySum1 == dummySum2)
                {
                    answer.push_back(aliceSizes[i]);
                    answer.push_back(bobSizes[mid2]);
                }
                else if (dummySum1 > dummySum2)
                {
                    e2 = mid2 - 1;
                }
                else
                {
                    s2 = mid2 + 1;
                }
            }
        }
        return answer;
    }
};

int main()
{
    vector<int> aliceSizes;
    vector<int> bobSizes;
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; ++i)
    {
        int element;
        cin >> element;
        aliceSizes.push_back(element);
    }
    for (int i = 0; i < n2; ++i)
    {
        int element;
        cin >> element;
        aliceSizes.push_back(element);
    }
    Solution s1;
    s1.fairCandySwap(aliceSizes, bobSizes);
    return 0;
}