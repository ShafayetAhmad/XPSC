#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int day = 1;
    int maxCount = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= day)
        {
            day++;
            maxCount++;
        }
    }
    cout << maxCount << endl;

    return 0;
}