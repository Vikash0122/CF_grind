#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int res=0;
    res = n%a==0 ? n/a : n/a + 1; //for n side
    res *= (m%a==0 ? m/a : m/a + 1); // n side * m side
    cout<<res<<endl;
    return 0;
}