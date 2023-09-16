[Problem Link](https://codeforces.com/contest/1256/problem/B)

~~~

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; ++j) {
			cin >> a[j];
			--a[j];
		}
		int pos = 0;
		while (pos < n) {
			int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
			int el = a[nxt];
			a.erase(a.begin() + nxt);
			a.insert(a.begin() + pos, el);
			if (pos == nxt) pos = nxt + 1;
			else pos = nxt;
		}
		for (auto it : a) cout << it + 1 << " ";
		cout << endl;
	}
	
	return 0;
}
~~~
