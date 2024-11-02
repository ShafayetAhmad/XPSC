#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << x + x - 1 << endl;
    }
    else if (y > x)
    {
        cout << y + y - 1 << endl;
    }
    else
        cout << x + y << endl;
    return 0;
}