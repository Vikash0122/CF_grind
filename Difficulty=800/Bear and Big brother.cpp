#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count_yr=0;
    int a,b;
    cin>>a>>b;
    if(a==b)
    cout<<1;
    else
    {
        while(a<=b)
        {
            a*=3;
            b*=2;
            count_yr++;
        }
    cout<<count_yr;
    }
    return 0;
}