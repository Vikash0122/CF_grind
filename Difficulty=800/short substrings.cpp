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
cout<<st[0];
for(int i=1; i<n-1;i=i+2)
{
cout<<st[i];
}
cout<<st[n-1]<<endl;

}
return 0;
}
