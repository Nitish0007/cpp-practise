#include<iostream>

using namespace std;

int findPeakIndex(int arr[], int s, int e, int ans){
    cout<<"s : "<<s<<" ,e : "<<e<<" , ans : "<<ans<<endl;
    return 1;
    if(s > e){
        return ans;
    }
    int mid = s + (e - s)/2;

    if(arr[s] <= arr[mid]){
        ans = mid;
        return findPeakIndex(arr, mid, e, ans);
    }
    else{
        return findPeakIndex(arr, s, mid - 1, ans);
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