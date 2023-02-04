#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
if(arr[0]!=arr[n-1])
{
    cout<<"YES\n";
    cout<<arr[n-1]<<" "<<arr[0]<<" ";
    for(int i=1; i<n-1; i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
}
else
cout<<"NO\n";
}
return 0;
}
// If we put the maximum in the array on the first position, then for every element,
// starting from the third one, the sum of elements before it will be greater than it 
//(since that sum is greater than the maximum value in the array). 
//So, the only element that can make our array ugly is the second element. 
//We need to make sure that it is not equal to the first element.

// Let's put the maximum element on the first position, the minimum element on the second position, 
//and then fill the rest of the array arbitrarily. 
//The only case when it fails is when the maximum element is equal to the minimum element— 
//and it's easy to see that if the maximum is equal to the minimum, 
//then the first element of the array will be equal to the second element no matter what, 
//and the array cannot become beautiful.

// So, the solution is to check if the maximum is different from the minimum, and if it is so,
// put them on the first two positions, and the order of remaining elements does not matter.
// Note that the given array is sorted, so the minimum is the first element, the maximum is the last element.

