//D- Remove Two Letters
#include <bits/stdc++.h>

using namespace std;
//Symbols with numbers less than i or more than i+2
//  remain in both cases. Therefore, same strings will be obtained 
//if the characters with the numbers i and i+2 match.
// Therefore, we just need to count the number of i:1≤i≤n−2:s[i]=s[i+2]
// , and subtract this value from n−1 .
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = n - 1;
    for (int i = 1; i + 1 < n; ++i) {
        if (s[i - 1] == s[i + 1]) {
            res--;
        }
    }
    cout << res << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
