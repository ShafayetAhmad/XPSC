#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, t;
    cin >> a >> b >> t;
    int res = 0;
    int i = 1;
    while (a * i <= t + 0.5)
    {
        res += b;
        i++;
    }
    cout << res << endl;
    return 0;
}