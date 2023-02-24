#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int flag=0;
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
for(int i=0; i<n; i++)
{
    if(s[i]==s[i+1])
    flag++;
}
for(int i=0; i<m; i++)
{
    if(t[i]==t[i+1])
    flag++;
}
if(flag>1)
{cout<<"NO\n";}
else if(flag)
{
    cout<<(s[n - 1] != t[m - 1] ? "YES" : "NO") << endl;
}
else
cout<<"YES\n";

}
return 0;
}
//vikash0122
