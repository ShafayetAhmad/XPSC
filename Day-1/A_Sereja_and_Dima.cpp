// https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    bool ser = true;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0, d = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (v[l] > v[r])
        {
            if (ser)
            {
                s += v[l];
            }
            else
            {
                d += v[l];
            }
            l++;
        }
        else
        {
            if (ser)
            {
                s += v[r];
            }
            else
            {
                d += v[r];
            }
            r--;
        }
        ser = !ser;
    }
    cout << s << " " << d << endl;
    return 0;
}