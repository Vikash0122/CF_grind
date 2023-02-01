#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, w, d, h, a, b, f, g, d1, d2, d3, d4, ans;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>w>>d>>h;
        
        cin>>a>>b>>f>>g;
        
        ans=h;
        
        d1=w-a+w-f+abs(g-b);
        d2=a+f+abs(g-b);
        
        d3=d-b+d-g+abs(a-f);
        d4=b+g+abs(a-f);
        
        ans=ans+min(d1, min(d2, min(d3, d4)));
        
        cout<<ans<<"\n";
        
    }
}
