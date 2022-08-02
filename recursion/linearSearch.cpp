#include<iostream>

using namespace std;

bool linearSearch(int *arr,int size, int target){
  if(size == 0) return false;
  if(arr[0] == target) return true;
  return linearSearch(arr + 1, size - 1, target);
}

int main(){
    int n, target;
    cout<<"enter size of array"<<endl;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; ++i){
        int elem;
        cin >> elem;
        arr[i] = elem;
    }

   cout<<"enter target element to serach"<<endl;
   cin >> target;
    if(linearSearch(arr,n,target)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;

    delete []arr;

    return 0;
}