#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
ll x,y;
cin>>x>>y;
x=abs(x);
     y=abs(y);
     int ans = max(x, y) * 2 - 1;
     if(x==y) ans++;
     cout<<ans<<endl;
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
