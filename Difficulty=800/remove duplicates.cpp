#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    while(n--)
    {
        int x;
        cin>>x;
        auto it=find(v.begin(), v.end(), x);
        if(it != v.end())
        {
            v.erase(it);
        }
        v.push_back(x);
    }
    cout<<v.size()<<"\n";
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    return 0;
}