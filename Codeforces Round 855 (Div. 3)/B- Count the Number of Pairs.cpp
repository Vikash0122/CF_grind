#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<pair<char, char>, pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' and s[i] <= 'z')
            {
                m[{s[i], s[i] - 'a' + 'A'}].first++;
            }
            else
            {
                m[{s[i] - 'A' + 'a', s[i]}].second++;
            }
        }
        int ans = 0;
        for (auto i : m)
        {
            int c = min(i.second.first, i.second.second);
            ans += c;
            i.second.first -= c;
            i.second.second -= c;
            int take = max(i.second.first, i.second.second);
            int x = min(take / 2, k);
            ans += x;
            k -= x;
        }
        cout << ans << endl;
    }
 
    return 0;
}
