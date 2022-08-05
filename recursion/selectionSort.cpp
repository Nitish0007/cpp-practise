#include<iostream>

using namespace std;

void selectionSort(int arr[], int i, int n){
    if(i == n-1 || n == 1 || n == 0)return;

    for(int j = i+1; j < n; ++j){
        if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
        }
    }

selectionSort(arr, i + 1, n);
}

int main(){
     int n;
    cout << "enter size of array : " << endl;
    // array must be sorted and rotated
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }

    selectionSort(arr,0, n);

    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<' ';
    }
    cout<<endl;


    return 0;
}