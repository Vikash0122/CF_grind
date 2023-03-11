#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define mod 1000000007

void solve(){
ll n;
cin>>n;
int arr[n];
ll pro=1;
for(int i=0; i<n; i++)
{
    cin>>arr[i];
    pro*=arr[i];
}
ll res=0;
res=pro+(n-1);
cout<<2022*res<<endl;

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
