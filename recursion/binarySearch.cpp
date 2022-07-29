#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s, int e, int k){
    if(s > e) return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k) return true;

    if(arr[mid] > k){
        return binarySearch(arr, s, mid - 1, k);
    }
    else{
        return binarySearch(arr, mid + 1, e, k);
    }


}

int main(){

    int n , k;
    cout << " Enter size of sorted array"<<endl;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; ++i){
        int elem;
        cin >>elem;
        arr[i] = elem;
    }

    cout << "Enter key to find"<<endl;
    cin >> k;

    if(binarySearch(arr, 0, n-1, k)){
        cout << "Found" << endl;
    }
    else cout << "Not Found"<<endl;

    return 0;
}