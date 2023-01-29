#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    string st;
    cin>>st;
int n=0;
n=st.length();
string s ="";
for(int i=0; i<20; i++)
{
    s+="Yes";
}
if((n=s.find(st,0))==string::npos)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
return 0;
}
