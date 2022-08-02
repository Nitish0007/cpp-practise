#include<iostream>
#include<string>

using namespace std;

string reverse(string s, string ans){
    if(s == "")return ans;

    ans = s[0] + ans;
    return reverse(s.substr(1), ans);
}

int main(){

    string s;
    getline(cin,s);
    string ans = reverse(s, "");
    cout<<ans<<endl;

    return 0;
}