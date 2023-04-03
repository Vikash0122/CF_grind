#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
ll n,m;
cin>>n>>m;
    ll a[n]; for(int i=0; i<n; i++) cin>>(a[i]);
    ll b[m],c[m],d[m]; for(int i=0; i<m; i++)cin>>(b[i]),cin>>(c[i]),cin>>(d[i]);
    sort(a,a+n);
    auto check = [&](ll x,ll y, ll w, ll z){
        if((x-y)*(x-y) - 4*w*z < 0)
            return true;
        return false;
    };
    for(int i=0; i<m; i++){
        auto j=lower_bound(a,a+n,c[i])-a;
        auto k=upper_bound(a,a+n,c[i])-a;
        if(k!=n){
            if(check(c[i],a[k],b[i],d[i])){
                cout<<"Yes"<<endl;
                cout<<a[k]<<endl;
                continue;
            }
        }
        if(j<n && check(c[i],a[j],b[i],d[i])){
            cout<<"Yes"<<endl;
            cout<<a[j]<<endl;
            continue;
        }
        if(j){
            if(check(c[i],a[j-1],b[i],d[i])){
                cout<<"Yes"<<endl;
                cout<<a[j-1]<<endl;
                continue;
            }
        }
        cout<<"No"<<endl;
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
