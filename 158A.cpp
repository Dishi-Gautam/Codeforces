#include <bits/stdc++.h>
using namespace std;

void solve(const vector<int>& v, int d) {
    int c = 0;
    for(int i = 0; i<v.size(); i++) {
        if(v[i] >= v[d-1] && v[i]>0) {
            c++;
        }
    }
    cout << c << endl;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(a, d);
    return 0;
}
