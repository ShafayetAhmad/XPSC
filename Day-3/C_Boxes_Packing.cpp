#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int boxes;
    cin >> boxes;
    vector<long long int> v(boxes);
    for (int i = 0; i < boxes; i++)
        cin >> v[i];
    unordered_map<int, int> mp;
    for (int box : v)
        mp[box]++;
    int res = 0;
    for (auto p : mp)
    {
        res = max(p.second, res);
    }
    cout << res << endl;
    return 0;
}