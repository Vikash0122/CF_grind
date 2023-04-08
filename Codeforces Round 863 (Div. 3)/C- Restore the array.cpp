#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007


void solve(){
ll n;
cin>>n;
n--;
vector<ll> a(n),b(n+1);
for(int i=0; i<n; i++) cin>>a[i];

b[0]=a[0];
b[n]=a[n-1];
for(int i=0; i<n-1; i++) b[i+1]=min(a[i],a[i+1]);
for(int i=0; i<n+1; i++) cout<<b[i]<<" ";
cout<<endl;

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
