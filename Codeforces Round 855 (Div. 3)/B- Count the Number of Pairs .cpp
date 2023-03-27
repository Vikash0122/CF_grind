#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
map<char,int> p;
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			p[s[i]]++;
		}
		long long ans=0;
		for(char c='a';c<='z';c++)
		{
			int num=min(p[c],p[c-'a'+'A']);
			p[c]=p[c]-num;
			p[c-'a'+'A']=p[c-'a'+'A']-num;
			ans=ans+num;
		}
		for(char c='a';c<='z';c++)
		{
			int num=p[c]+p[c-'a'+'A'];
			ans=ans+min(k,num/2);
			k=k-min(k,num/2);
		}
		cout<<ans<<endl;
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
