#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_set<string> uset;
    vector<string> v;

    while (n--)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    reverse(v.begin(), v.end());
    for (string str : v)
    {
        if (uset.find(str) == uset.end())
        {
            cout << str << endl;
            uset.insert(str);
        }
    }
    return 0;
}