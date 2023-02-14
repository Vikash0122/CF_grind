#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    if (n & 1)
        for (int i = 0; i < n; ++i)
            cout << "69 ";
    else {
        cout << "1 3 ";
        for (int i = 2; i < n; ++i)
            cout << "2 ";
    }
    cout << "\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
//vikash0122
