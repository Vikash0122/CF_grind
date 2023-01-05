#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    int sum=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        sum -= a;
        sum += b;
        if (sum > res)
        {
            res = sum;
        }
    }
    cout<<res<<endl;
    return 0;
}