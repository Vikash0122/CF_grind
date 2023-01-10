#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
    }
    cout<<n;

    return 0;
}