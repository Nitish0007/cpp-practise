#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size <= 1)return true;
    if(arr[0] > arr[1])return false;

    return isSorted(arr + 1, size -1);

}

int main()
{
    int arr[] = {1, 2, 4, 6, 10, 12};
    int brr[] = {12, 10, 8, 4, 2, 0};

    cout << isSorted(arr, 6) << endl;
    cout << isSorted(brr, 6) << endl;

    return 0;
}