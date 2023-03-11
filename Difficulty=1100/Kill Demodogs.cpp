#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define n1 1000000007

void solve(){
ll n;
cin>>n;
ll ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
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
