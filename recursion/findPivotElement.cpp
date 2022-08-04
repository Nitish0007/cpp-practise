#include<iostream>

using namespace std;

int findPivot(int arr[], int s, int e, int ans){
    if(s >= e){
        return ans;
    }

    int mid = s + (e - s)/2;

    if(arr[mid] >= arr[0]){
        return findPivot(arr, (mid + 1), e, ans);
    }
    else{
        ans = mid;
        return findPivot(arr, s, mid, ans);
    }
}

int main(){
int n; 
    cout <<"enter size of array : "<<endl;
    //array must be sorted and rotated
    cin>> n;
    int *arr = new int[n];
     for (int i = 0; i < n; ++i)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }

    int pivot = findPivot(arr, 0, (n-1),-1);
    cout<<pivot<<endl;

    delete []arr;

    return 0;
}