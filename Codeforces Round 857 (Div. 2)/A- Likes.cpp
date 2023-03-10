#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define mod 1000000007
#define fori(i,m,n) for(int i=m; i<n; i++)


void solve(){
ll n;
cin>>n;
int arr[n];
int c_p=0, c_n=0;
fori(i,0,n)
{
    cin>>arr[i];
    if(arr[i]<0)
    c_n++;
    else
    c_p++;
}
int temp=c_n;
int temp2=temp;
//maximum number of likes
for(int i=1; i<=c_p; i++)
cout<<i<<" ";
while(c_n>0)
{
    cout<<(--c_p)<<" ";
    c_n--;
}
cout<<endl;

//minimum number of dislikes
while(temp>0)
{
    cout<<"1 0"<<" ";
    temp--;
}
int j=1;
for(int i=2*temp2; i<n; i++)
{cout<<j<<" ";
j++;}
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
