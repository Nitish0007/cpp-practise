#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1, end = 2*n - 1;
    for(int i = 1; i <= end; ++i){
        for(int j = 1; j <= end; ++j){
            if(i == start || j == end || j == start || i == end || i == j){
                cout<<n<<" ";
            }   
            else{
                cout<<" ";
            }
        }
        n--;
        start++;
        end--;
        cout<<endl;
    }
    return 0;
}