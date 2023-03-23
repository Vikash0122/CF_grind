#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
string s; cin>>s;
    map<char,ll>mp;
    for(auto x: s) mp[x]++;
    ll sz=mp.size();
    if(sz==4 or sz==3) cout<<4<<endl;
    else if(sz==1) cout<<-1<<endl;
    else{
        for(auto x: mp){
            if(x.second==3) {
                cout<<6<<endl;
                return;
            }
        }
        cout<<4<<endl;
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
