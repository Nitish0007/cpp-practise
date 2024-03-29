#include<iostream>

using namespace std;

void insertionSort(int* arr, int i, int n){
  if(n == 0 || n == 1 || i == n)return;

  int curr = arr[i];
  int j = 0;

  while(j < i){
    if(arr[j] > curr){
        swap(arr[j], arr[i]);
    }
    j++;
  }
  insertionSort(arr, i+1, n);
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

    insertionSort(arr,1, n);

    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<' ';
    }
    cout<<endl;


    return 0;
}