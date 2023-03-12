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
vector<int> a(n);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=1; i<n-1; i++){
if(a[i]>a[i-1] && a[i]>a[i+1]){
    cout<<"YES"<<endl;
    cout<<i<<" "<<i+1<<" "<<i+2<<endl;
    return;
}
}
cout<<"NO"<<endl;
return;
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
