#include <iostream>

using namespace std;

int firstOccurence(int arr[],  int s, int e, int target,int ans) {
    if(s>e){
        return ans;
    }

    int mid = s + (e - s)/2;

    if(arr[mid] == target){
        ans = mid;
        return firstOccurence(arr, s, mid-1, target, ans);
    }
    else if(arr[mid] > target){
        return firstOccurence(arr, s, mid-1, target, ans);
    }
    else{
        return firstOccurence(arr, mid+1, e, target,ans);
    }

}

int lastOccurence(int arr[],  int s, int e, int target,int ans) {

    if(s > e){
        return ans;
    }
    int mid = s + (e - s)/2;

    if(arr[mid] == target){
        ans = mid;
        return lastOccurence(arr, mid + 1, e, target, ans);
    }
    else if(arr[mid] > target){
        return lastOccurence(arr, s, mid - 1, target, ans);
    }
    else{
        return lastOccurence(arr, mid + 1, e, target, ans);
    }
}

int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }

    int k;
    cout << "Enter the number whose occurence is required :";
    cin >> k;

    int fistIndex = firstOccurence(arr, 0, n - 1, k, -1);
    cout<<"first Occurence is at index: "<<fistIndex<<endl;
    int lastIndex = lastOccurence(arr, 0 , n - 1, k, -1);
    cout<<"last Occurence is at index: "<<lastIndex<<endl;


    return 0;
}