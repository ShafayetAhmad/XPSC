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
        vector<string> x(n), y(n), z(n);
        unordered_map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            m[x[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
            m[y[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> z[i];
            m[z[i]]++;
        }

        int res1 = 0, res2 = 0, res3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[x[i]] == 1)
                res1 += 3;
            else if (m[x[i]] == 2)
                res1 += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[y[i]] == 1)
                res2 += 3;
            else if (m[y[i]] == 2)
                res2 += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (m[z[i]] == 1)
                res3 += 3;
            else if (m[z[i]] == 2)
                res3 += 1;
        }
        cout << res1 << " " << res2 << " " << res3 << endl;
    }
    return 0;
}