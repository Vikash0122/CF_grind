#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
int n,s,r;
cin>>n>>s>>r;
int val=s-r;
cout<<val<<" ";
int j=1;
for(j=2;j<=n;j++){
            while(r-val<n-j){
                val--;
            }
            cout<<val<<" ";
            r=r-val;
        }
        cout<<"\n";
    }
return 0;
}
