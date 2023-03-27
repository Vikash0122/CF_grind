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
int max1=0,max2=0;
int a[n],b[n];
for(int i=0; i<n; i++){
cin>>a[i];
} 
for(int i=0; i<n; i++){
    cin>>b[i];
    if(a[i]<b[i]){
        swap(a[i],b[i]);
    }
}
for(int i=0; i<n; i++){
max1=max(max1,a[i]);
max2=max(max2,b[i]);
}


if(max1==a[n-1] && max2==b[n-1])
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

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
