#include<iostream>

using namespace std;

void mergeSort(int* arr, int size){

    
}

int main(){
     int n;
    cout << "enter size of array : " << endl;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }

    mergeSort(arr,n);

    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    return 0;
}