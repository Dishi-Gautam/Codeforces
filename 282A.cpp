#include <bits/stdc++.h>
using namespace std;

int x=0;
void solve(string s){
    if(s=="X++" || s=="++X"){
        x=x+1;
    }
    if(s=="X--" || s=="--X"){
        x=x-1;
    }
}


int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        solve(s);
    }
    cout<<x;
    return 0;
}