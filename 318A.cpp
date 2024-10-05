#include <bits/stdc++.h>
using namespace std;

void solve(int n,int k){
    vector<int>v1,v2;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            v1.push_back(i);
        }
        else{
            v2.push_back(i);
        }
    }
   v1.insert(v1.end(), v2.begin(), v2.end());
   if(k>0 && k<=v1.size()){
    cout<<v1[k-1];}
    else{
        cout<<"Out of bound";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    solve(n,k);
}