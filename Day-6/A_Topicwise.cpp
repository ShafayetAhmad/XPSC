#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<pair<int, int>> periods(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> periods[i].first >> periods[i].second;
    }

    int totalPower = 0;

    for (int i = 0; i < n; ++i)
    {
        int li = periods[i].first;
        int ri = periods[i].second;

        totalPower += (ri - li) * P1;

        if (i < n - 1)
        {
            int idleStart = periods[i + 1].first;
            int totalIdle = idleStart - ri;

            if (totalIdle <= T1)
            {
                totalPower += totalIdle * P1;
            }
            else if (totalIdle <= T1 + T2)
            {
                totalPower += T1 * P1 + (totalIdle - T1) * P2;
            }
            else
            {
                totalPower += T1 * P1 + T2 * P2 + (totalIdle - T1 - T2) * P3;
            }
        }
    }

    cout << totalPower << endl;
    return 0;
}
