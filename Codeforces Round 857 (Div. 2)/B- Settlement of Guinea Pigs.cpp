#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define mod 1000000007

void solve(){
int n;
    	cin>>n;
    	int ans=0;
    	int x=0;
    	int p=0;
    	for(int i=0;i<n;i++){
    		int k;
    		cin>>k;
    		if(k==1){
    			x++;
    			ans=max(ans,x);
    			p++;
    		}
    		else{
    			x=p/2+1;
    			if(p==0){
    				x=0;
    			}
    		}
    		// cout<<x<<" ";
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
