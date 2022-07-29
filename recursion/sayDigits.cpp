#include<iostream>
#include<string>

using namespace std;

void sayDigits(int n){
    if(n <= 0) return;
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int digit = n % 10;
    sayDigits(n/10);
    cout<<arr[digit]<<' ';
}

int main(){
    int n;
    cout <<"Enter any number "<<endl;
    cin>>n;
    sayDigits(n);
    return 0;
}
