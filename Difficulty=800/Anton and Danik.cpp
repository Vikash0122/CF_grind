#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string games;
    cin>>games;
    int Anton=0, Danik=0;
    for(int i=0; i<n; i++)
    {
        if(games[i]=='A')
        Anton++;
        else if(games[i]=='D')
        Danik++;
    }
    if(Anton==Danik)
    cout<<"Friendship";
    else if(Anton>Danik)
    cout<<"Anton";
    else 
    cout<<"Danik";
    return 0;
}