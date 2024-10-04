#include <bits/stdc++.h>
using  namespace std;

void solve(string s){
    int n=s.length();
    int c=0,i,j;
    for(i=0;i<n;i++){
        bool f=true;
        for(j=0;j<n;j++){
            if(s[i]==s[j]){
                f=false;
            }
            else{c++;}
        }
    }
    if(c%2==0){cout<<"CHAT WITH HER!";}
    else{
        cout<<"IGNORE HIM!";
    }
}

int main(){
    string s;
    cin>>s;
    solve(s);
    return 0;
}