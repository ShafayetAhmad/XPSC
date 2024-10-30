#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_set<string> uset;
    while (n--)
    {
        string str;
        cin >> str;
        if (uset.find(str) != uset.end())
            cout << "YES" << endl;
        else
        {
            uset.insert(str);
            cout << "NO" << endl;
        }
    }
    return 0;
}