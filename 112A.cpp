#include <bits/stdc++.h>
using namespace std;

void solve(string s1,string s2){
    if(s1.length()<s2.length()) cout<<"-1";
   else if(s2.length()<s1.length()) cout<<"1";
   else{
        for(int i=0;i<s1.length();i++){
            if(tolower(s1[i])==tolower(s2[i])){
                cout<<"0";
            }
        }
   }
}

int main(){ 
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    solve(s1,s2);
    return 0;
}