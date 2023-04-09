#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
    ll i, j, k, n, m;
    cin>>n;
   vector<vector<ll>>ans(2,vector<ll>(n));
   ll mx=2*n;
   ans[0][0]=mx;
   ans[1][n-1]=mx-1;
   ll front=1,back=mx-2;
   for(i=0;i<n-1;i++)
   {
    if(i&1)
    {
      ans[1][i]=back-1;
      ans[0][i+1]=back;
      back-=2;
    }
    else
    {
      ans[1][i]=front;
      ans[0][i+1]=front+1;
      front+=2;
    }
   }

   for(i=0;i<2;i++)
   {
    for(j=0;j<n;j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
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
