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
ll arr[n];
ll odd=0;
ll even=0;
for(int i=0; i<n; i++)
{
    cin>>arr[i];
    if(arr[i] & 1)
    odd++;
    else
    even++;
}
cout<<(odd % 2 == 1 ? odd : even) << endl;
}

int main(){
FIN;

solve();

return 0;
}
