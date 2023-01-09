#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i=0; i<5 ; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }

    int res_i=0;
    int res_j=0;

    for(int i=0; i<5 ; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                res_i=i;
                res_j=j;
            }
        }
    }
    int res=0;
    res = abs(res_i-2) + abs(res_j-2);
    cout<<res;
    
    return 0;
}
