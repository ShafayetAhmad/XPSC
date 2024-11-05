#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
const int INF = INT_MAX;
const long long int LINF = LLONG_MAX;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
            //
        }
        priority_queue<pair<int, int>> pq;
        for (auto [x, y] : mp)
        {
            pq.push({y, x});
        }
        int res = n;

        while (pq.size() >= 2)
        {
            auto [count1, num1] = pq.top();
            pq.pop();
            auto [count2, num2] = pq.top();
            pq.pop();
            count1--;
            count2--;
            res -= 2;
            if (count1 > 0)
                pq.push({count1, num1});
            if (count2 > 0)
                pq.push({count2, num2});
        }
        cout << res << "\n";
    }
    return 0;
}