#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    if(sum>=1)
    cout<<"HARD";
    else 
    cout<<"EASY";
    return 0;
}