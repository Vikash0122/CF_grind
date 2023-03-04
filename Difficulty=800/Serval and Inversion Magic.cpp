#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"

void solve(){
    vector<ll> res;
ll n;
cin>>n;
string s;
cin>>s;
for(int i=0; i<n/2; i++)
{
    if(s[i]!=s[n-i-1])
    res.push_back(i);
}
ll z=1;
for(int i=1; i<res.size(); i++)
{
    if(res[i]!=res[i-1]+1)z=0;
}
if(z) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
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
