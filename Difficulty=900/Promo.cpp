#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
 int n, q;
  cin >> n >> q;
  vector<long long> p(n), s(n + 1);
  for (auto& x : p) cin >> x;
  sort(p.begin(), p.end());
  for (int i = 0; i < n; ++i) s[i + 1] = s[i] + p[i];
  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << s[n - x + y] - s[n - x] << '\n';
  }
}

int main(){
FIN;
solve();

return 0;
}
