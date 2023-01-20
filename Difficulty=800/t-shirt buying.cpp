#include <bits/stdc++.h>
using namespace std;
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
long long n;
cin>>n;
long long p[n];
for (long long i = 0; i < n; i++)
{cin>>p[i];
}
vector<set<int>> v(4);
for (int i = 0; i < 2*n; i++)
{
int x;cin>>x;     
 if(i<n){  
v[x].insert(p[i]);}
else
{
   v[x].insert(p[i-n]);
}
}

long long m;cin>>m;
for (int i = 0; i < m; i++)
{int c;cin>>c;
if (v[c].size()==0)
{
   cout<<"-1"<<" ";
}
else
{long long x=*(v[c].begin());
   cout<<x<<" ";
   v[1].erase(x);
    v[2].erase(x);
     v[3].erase(x);
}
}
return 0;
}