[Link](https://codeforces.com/problemset/problem/1559/C)


~~~
#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
    ll n; cin>>n;
    vector<ll> a(n,0);
    for (int i = 0; i < n ; ++i){
        cin>>a[i];
    }  
    int last=-1;
    for(int i=n-1; i>=0; i--){
        if(a[i]==0){
            last=i;
            break;
        }
    }
    int i=0;
    for(i=0; i<=last; i++){
        cout<<i+1<<" ";
    }
    cout<<n+1<<" ";
    while(i<n) cout<<(i++)+1<<" ";
    cout<<endl;
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
~~~
