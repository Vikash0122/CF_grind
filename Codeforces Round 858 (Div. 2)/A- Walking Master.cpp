#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
ll a,b,c,d,ans=0;
cin>>a>>b>>c>>d;
ans=a-c+2*(d-b);
if(d>=b && a+d>=b+c) cout<<ans<<endl;
else
cout<<-1<<endl;
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
