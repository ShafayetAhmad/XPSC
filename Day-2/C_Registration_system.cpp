#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_map<string, int> m;
    while (n--)
    {
        string str;
        cin >> str;
        if (m.find(str) == m.end())
        {
            m[str]++;
            cout << "OK" << endl;
        }
        else
        {
            cout << str << m[str] << endl;
            m[str]++;
        }
    }
    return 0;
}