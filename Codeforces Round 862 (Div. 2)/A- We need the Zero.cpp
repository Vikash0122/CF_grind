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
int arr[n];
ll xo=0;
for(int i=0; i<n; i++){
cin>>arr[i];
xo^=arr[i];
} 

if(n&1){
    cout<<xo<<endl;
}else{
    if(xo==0)cout<<xo<<endl;
    else
    cout<<"-1"<<endl;
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
