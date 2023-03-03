//A- Is it a Cat?
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    //converting to lower case letters
    transform(s.begin(), s.end(), s.begin(), [] (char c) {
        return tolower(c);
    });
    //removing duplicate characters
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << (s == "meow" ? "YES" : "NO") << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}
