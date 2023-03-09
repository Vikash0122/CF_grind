// Observe that there are exactly two strings of length n−1
//  (one prefix and one suffix). We will call them x
//  and y
// . Then, s
//  is a palindrome if and only if rev(x)=y
// , where rev(x)
//  is the reversal of string x
// .

// So, to solve the problem it is enough to find the two strings of length n−1
//  and check if one of them is equal to the reversal of the other. 


#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"

void solve(){
ll n;
cin>>n;
vector<string> st;
for(int i=0; i<2*n-2; i++)
{
    string s;
    cin>>s;
    if(s.size()==n-1)
    st.push_back(s);
}
reverse(st[1].begin(),st[1].end());
if(st[0]==st[1])
cout<<"YES"<<endl;
else
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
