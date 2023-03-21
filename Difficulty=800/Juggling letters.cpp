#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
int n;
        cin>>n;
        vector<int>a(26);
        for(int i=0;i<n;i++){   
            string s;
            cin>>s;
            for(int j=0;j<(int)s.size();j++){
                int k=s[j]-(int)'a';
                a[k]++;
            }
        }
        for(int i=0;i<26;i++){
            if(a[i]%n!=0){
                cout<<"NO"<<"\n";
                return;
            }
        }
        cout<<"YES"<<"\n";
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
