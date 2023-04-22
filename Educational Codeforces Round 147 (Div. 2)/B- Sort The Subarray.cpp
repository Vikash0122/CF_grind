#include<bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define endl "\n"
#define PI 3.141592653589793238462
#define mod 1000000007

void solve(){
ll n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int start = 0;
        while (start < n && a[start] == b[start]) {
            start++;
        }

        int end = n - 1;
        while (end >= 0 && a[end] == b[end]) {
            end--;
        }

        for(int i=start-1;i>=0;i--){
            if(b[i]<=b[start]){start=i;}
            else{break;}
        }
        for(int i=end+1;i<n;i++){
            if(b[i]>=b[end]){end=i;}
            else{break;}
        }

        cout << start+1 << " " << end+1 << endl;
}

int main(){
FIN;
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}// Vikash0122
