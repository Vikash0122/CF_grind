#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"

int isSubstring(string s1)
{
    string s2 = "FBFFBFFB";
    string checker="";
    for(int i=0; i<8; i++)
    {checker+=s2;}
	// using find method to check if s1 is
	// a substring of s2
	if (checker.find(s1) != string::npos)
		return checker.find(s1);
	return -1;
}

int main(){
FIN;
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
string s;
cin>>s;
int res = isSubstring(s);
	if (res == -1)
		cout << "NO\n";
	else
		cout << "YES\n";
}
return 0;
}//vikash0122
