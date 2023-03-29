#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
 ll n;
    string s,t;
    cin>>s;
    n = s.length();
    transform(s.begin(),s.end(),s.begin(), ::tolower);

    for(ll i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else{
            t += '.';
            t += s[i];
        }
    }
    cout<<t<<endl;
}

int main(){
FIN;
solve();

return 0;
}
