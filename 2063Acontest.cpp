#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n; 
    int r[n]; 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b; 
        if (a == 1 && b == 1) {
            r[i] = 1;
        } else {
            r[i] = b - a; 
        }
    }
 
    for (int i = 0; i < n; i++) {
        cout << r[i] << endl; 
    }
 
    return 0;
}