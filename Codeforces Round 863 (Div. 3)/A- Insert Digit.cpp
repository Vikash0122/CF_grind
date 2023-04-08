#include <bits/stdc++.h>

using namespace std;

int ii() {
  int num;
  cin >> num;
  return num;
}

vector<int> ai() {
  vector<int> arr;
  int num;
  while (cin >> num) {
    arr.push_back(num);
  }
  return arr;
}

int main() {
  int t = ii();

  while (t--) {
    int n = ii(), d = ii();

    string s;
    cin >> s;

    string ans = "";
    bool done = false;
    for (char i : s) {
      if (i - '0' >= d || done) {
        ans += i;
      } else {
        ans += to_string(d);
        ans += i;
        done = true;
      }
    }

    if (!done) {
      ans += to_string(d);
    }

    cout << ans << endl;
  }

  return 0;
}
