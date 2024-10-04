#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    string o = "";
    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, 3) == "WUB") {
            i += 2; 
            if (!o.empty()) {
                o += ' ';
            }
        } else {
            o += s[i];
        }
    }
    cout << o;
}

int main() {
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}
