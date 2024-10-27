// https://codeforces.com/problemset/problem/1927/A
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
        string str;
        cin >> str;
        int l = 0, r = n - 1;
        while (str[l] != 'B')
            l++;
        while (str[r] != 'B')
            r--;
        cout << r - l + 1 << endl;
    }
    return 0;
}