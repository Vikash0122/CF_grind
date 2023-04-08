#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

int find_small(int x,int y, int n){
  x--;y--;
  x = min(x, n-x-1);
  y = min(y, n-y-1);
  return min(x,y);
}


void solve(){
ll n,x1,y1,x2,y2;
cin>>n>>x1>>y1>>x2>>y2;
      cout<<abs(find_small(x1,y1,n) - find_small(x2,y2,n))<<endl;
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
