#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"

void solve(){
string s1,s2;
cin>>s1>>s2;
char x1=s1[0];
char x2=s2[0];
char y='*';
if(x1==x2){
    cout<<"YES"<<endl;
    cout<<x1<<y<<endl;
    return;
}
char last1=s1.back();
char last2=s2.back();
if(last1==last2){
    cout<<"YES"<<endl;
    cout<<y<<last1<<endl;
    return;
}
int ok=0;
for(int i=0; i<s1.length()-1; i++)
{
    for(int j=0; j<s2.length()-1; j++)
    {
        if(s1[i]==s2[j] && s1[i+1]==s2[j+1]){
            ok=1;
            cout<<"YES"<<endl;
            cout<<y<<s1[i]<<s1[i+1]<<y<<endl;
            return;
        }
    }
}
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
