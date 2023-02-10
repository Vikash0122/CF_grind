#include <bits/stdc++.h>

const char nl = '\n';

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    
    int c_v = 1;
    for (int i = 0; i < n; i++) {
        if (p[i] == c_v) c_v++;
    }
    
    cout << (n  - c_v + k) / k  << nl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	
	int T;
	cin >> T;
	while (T--) solve();
}//vikash0122
