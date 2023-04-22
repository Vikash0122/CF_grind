#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
    string s;
    cin>>s;
if(s.front()=='0'){
        cout<<0<<"\n";
        return;
    }
    int n=s.size();
    ll cnt=1;
    for(int i=0; i<n; i++){
        if(s[i]=='?'){
            if(i==0)
            cnt*=9;
            else
            cnt*=10;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
FIN;
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}//Vikash0122
