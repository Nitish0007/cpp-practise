#include<iostream>

using namespace std;

void insertionSort(int arr[], int i, int n){
  
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

    insertionSort(arr,1, n);

    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<' ';
    }
    cout<<endl;


    return 0;
}