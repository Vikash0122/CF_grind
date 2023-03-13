#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007


void solve(){
 ll n,k,d,w;
 cin>>n>>k>>d>>w;
 
 ll arr[n];
 
 for(ll i=0;i<n;i++)
 cin>>arr[i];
 
 ll ans=0;
 
 for(ll i=0;i<n;i++){
     ll j=i;
     
     while(j<n && arr[j]-arr[i]<=w && j-i<=k)
     j++;
     
     ++ans;
     
     if(j-i>k){
         i+=k-1;
     }
     else{
         ll rem = k-(j-i);
         
         while(j<n && rem>0 && arr[j]-(arr[i]+w)<=d)
         rem--,j++;
         
         i=--j;
     }
 }

 cout<<ans<<endl;
}

int main(){
    
  FIN;
  ll t;
  t=1;
  cin>>t;
  while(t--)
  solve();
  
  return 0;
}
