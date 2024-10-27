// https://codeforces.com/contest/44/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    set<string> ss;
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        ss.insert(str);
    }
    cout << ss.size() << endl;

    return 0;
}