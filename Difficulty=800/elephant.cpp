#include <bits/stdc++.h>
using namespace std;

int main() {
int x;
cin>>x;
int rem=x%5;
int quo=x/5;
if(x<=5)
cout<<1;
else if(rem<5 && rem>0)
cout<<quo+1;
else 
cout<<rem+quo;
return 0;
}
