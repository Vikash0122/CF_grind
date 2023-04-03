#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
ll n;
        cin >> n;

        string s;
        cin >> s;

        char mn = 'z';
        int pos = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] <= mn) {
                mn = s[i];
                pos = i;
            }
        }

        string new_s = "";
        new_s += mn;

        for (int i = 0; i < n; i++) {
            if (i == pos) {
                continue;
            }
            new_s += s[i];
        }

        cout << new_s << endl;
}

int main(){
FIN;
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
