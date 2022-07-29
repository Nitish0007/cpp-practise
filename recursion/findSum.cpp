#include<iostream>

using namespace std;

int findSum(int *arr, int n){
    if(n == 0) return 0;
    if(n == 1) return (arr[0]);

    int sum = 0;
    sum = arr[0] + findSum(arr+1,n-1);

    return sum;
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i){
        int elem;
        cin >>elem;
        arr[i] = elem;
    }
    int sum = findSum(arr,n);
    cout<<sum<<endl;

    delete []arr;

    return 0;
}