#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
cin>>arr[i];
}

int i=0, j=i+1, count=1, res=1;
for(i=0; i<n; i++)
{
    if(arr[j]>=arr[i] && j<=n-1)
    count++;
    else{
        res=max(res,count);
        count=1;
    }
    j++;
}
cout<<max(res,count);

return 0;
}
//vikash0122
