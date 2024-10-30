#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str, res;
        cin >> str;
        set<char> uSet(str.begin(), str.end());
        string r(uSet.begin(), uSet.end());
        sort(r.begin(), r.end());

        unordered_map<char, char> dMap;
        for (int i = 0; i < r.size(); i++)
        {
            dMap[r[i]] = r[r.size() - i - 1];
        }

        for (int i = 0; i < str.size(); i++)
        {
            res += dMap[str[i]];
        }
        cout << res << endl;
    }
    return 0;
}