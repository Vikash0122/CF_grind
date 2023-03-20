#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
ll n,res=0;
cin>>n;
vector<ll> a(n,0),b(n,0);
for(ll i=0; i<n; i++) cin>>a[i];
for(ll i=0; i<n; i++){
    cin>>b[i];
    if(a[i]>b[i])
     swap(a[i],b[i]);
    if(i)
    res+=abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
}
cout<<res<<endl;
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
