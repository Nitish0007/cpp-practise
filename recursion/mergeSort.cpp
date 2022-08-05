 #include<iostream>

 using namespace std;

 void merge(int *arr, int s, int e){
    int mid = s + (e - s)/2;
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *first = new int[l1];
    int *last = new int[l2];

    int p = s;
    for(int i = 0; i < l1; ++i){
        first[i] = arr[p++];
    }

    p = mid+1;
    for(int i = 0; i < l2; i++){
        last[i] = arr[p++];
    }

    int firstArrayIndex = 0, lastArrayIndex = 0;
    int k = s;
    while(firstArrayIndex < l1 && lastArrayIndex < l2){
        if(first[firstArrayIndex] <= last[lastArrayIndex]){
            arr[k++] = first[firstArrayIndex++];
        }
        else{
            arr[k++] = last[lastArrayIndex++];
        }
    }

    while(firstArrayIndex < l1){
            arr[k++] = first[firstArrayIndex++];
    }

    while(lastArrayIndex < l2){
            arr[k++] = last[lastArrayIndex++];
    }

    delete []first;
    delete []last;
 }

 void mergeSort(int *arr,int s, int e){
    // cout<<s<<" "<<e<<endl;
    if(s>=e) return;

    int mid = s + (e-s)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
    // cout<<"line 61"<<endl;
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

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

    return 0;
 }