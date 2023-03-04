#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"

void solve(){
ll n;
cin>>n;
vector<ll> a(n);
for(int i=0; i<n; i++) {cin>>a[i];}

ll res=0;
		for(ll i=0;i<n; i++){
			for(ll j=i+1;j<n;j++){
				if(__gcd(a[i],a[j])<=2)res++;
			}
		}
		if(res)cout<<"Yes"<<endl;
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
