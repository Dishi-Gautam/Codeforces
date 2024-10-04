#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    vector<int>n;
    string o="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            n.push_back(s[i]-'0');
        }
    }
    sort(n.begin(),n.end());
    for(int i=0;i<n.size();i++){
        if(i!= 0){
            o+='+';
        }
        o+=to_string(n[i]); 
    }
    cout<<o;
}

int main() {
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}
