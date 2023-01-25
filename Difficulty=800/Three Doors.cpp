#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<3;i++){
            if(arr[x- 1]!=0){
                count++;
                x=arr[x- 1];
            }
            
        }
        if(count==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
