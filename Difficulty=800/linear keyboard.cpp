#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
        while(t--)
        {
                string s;
                cin>>s;
                ll a[26];
                ll i,n=s.size(),sum=0;
                for(i=0;i<n;i++)
                a[s[i]-'a']=i; // storing the index of each character in the string 's' in the array 'a'. 
                //For example, if s[i] is 'c', s[i]-'a' will be 99-97 which is equal to 2. 
                //So, a[2]=i which means that the index of 'c' in the string 's' is 'i'.
                string st;
                cin>>st;
                for(i=1;i<st.size();i++)
                sum=sum+abs(a[st[i]-'a']-a[st[i-1]-'a']);
                cout<<sum<<endl;
        }
    return 0;
}
