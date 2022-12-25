#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
int count=0;
while(t--)
{
int n1,n2,n3;
cin>>n1>>n2>>n3;;
int ans=n1+n2+n3;
if(ans>1){
count++;
}
}
cout<<count;
return 0;
}
