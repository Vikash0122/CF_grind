#include <bits/stdc++.h>
using namespace std;
 
const int sz = 1e5 + 10;
int ara[sz];
 
int main()
{
    int t;
    cin>>t;
 
    while(t--) {
        int n;
        cin>>n;
 
        int sum = 0;
 
        for(int i = 1; i <= n; i++) {
            cin>>ara[i];
            sum += ara[i];
        }
 
        int ans = -1e9;
 
        for(int i = 1; i < n; i++) {
            if(ara[i] == ara[i+1]) {
                if(ara[i] == 1) ans = max(ans, sum-4);
                else ans = max(ans, sum+4);
            }
            else
                ans = max(ans, sum);
        }
 
        cout<<ans<<"\n";
    }
    return 0;
}
