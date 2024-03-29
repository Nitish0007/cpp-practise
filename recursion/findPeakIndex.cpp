#include<iostream>

using namespace std;

int findPeakIndex(int arr[], int s, int e, int ans){
    if(s >= e){
        return ans;
    }

    int mid = s + (e - s)/2;

    if(arr[mid] <= arr[mid + 1]){
        ans = mid+1;
        return findPeakIndex(arr, mid + 1, e, ans);
    }
    else{
        return findPeakIndex(arr, s, mid, ans);
    }
}

int main(){
    int n; 
    cout <<"enter size of array : "<<endl;
    cin>> n;
    int *arr = new int[n];
     for (int i = 0; i < n; ++i)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }

    cout<<findPeakIndex(arr, 0, (n-1),-1)<<endl;

    delete []arr;

    return 0;
}