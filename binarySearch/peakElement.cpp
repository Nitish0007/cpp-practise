// return the index of an element which is strictly greater than its neighbours

#include <iostream>

using namespace std;


int main()
{

    int n;
    cout << "enter size of array : " << endl;
    // array must be sorted and rotated
    cin >> n;
    int *nums = new int[n];
    for (int i = 0; i < n; ++i)
    {
        int elem;
        cin >> elem;
        nums[i] = elem;
    }

    int s = 0, e = n - 1;
    if (n == 1)
        return 0;

    while (s <= e){
        int mid = s + (e - s)/2;

        if(mid > 0 && mid < n-1){
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])return mid;
            else if(nums[s+1] > nums[s]){
                s++;
            }
            else if(nums[e - 1] > nums[e]){
                e--;
            }
        }
        else if(mid == 0){
            if(nums[0] > nums[1])return 0;
            return n-1;
        }
        else{
            if(nums[n-1] > nums[n-2])return n -1;
            return 0;
        }
    }
    

    delete[] nums;

    return 0;
}