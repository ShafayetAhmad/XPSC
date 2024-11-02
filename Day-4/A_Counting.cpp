#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int counter = 0;
    int a, b;
    cin >> a >> b;
    if (b > a)
        cout << b - a + 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}