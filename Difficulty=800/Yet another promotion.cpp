/*
    vikash0122
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long a,b,n,m;
    cin>>a>>b>>n>>m;
    if(n<=m){
        cout<<n*min(a,b)<<endl;
        return 0;
    }

    if((m*a)<=(m+1)*b){
        long long temp1=n/(m+1);
        long long temp2=n%(m+1);
        long long temp3=temp1*m*a;
        temp3+=temp2*min(a,b);
        cout<<temp3<<endl;
    }
    else{
        cout<<n*b<<endl;   
    }
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
