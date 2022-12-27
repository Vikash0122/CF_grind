#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int total=0;
    int cost=0;
    for(int i=1; i<=w; i++)
    {
        cost=k*i;
        total+=cost;
    }
    if(total>n)
    cout<<total-n;
    else 
    cout<<0;
    return 0;
}