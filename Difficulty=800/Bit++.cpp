#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int countplus=0;
    int countminus=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="++X" or s=="X++")
        countplus++;
        else 
        countminus++;
    }
    if(countplus==countminus)
    cout<<0;
    else
    cout<<countplus-countminus;
    return 0;
}