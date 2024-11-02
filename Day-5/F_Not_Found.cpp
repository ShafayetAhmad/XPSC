#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(26, 0);
    string str;
    cin >> str;
    bool flag = false;
    for (char ch : str)
    {
        v[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            flag = true;
            cout << char('a' + i) << endl;
            break;
        }
    }
    if (!flag)
        cout << "None" << endl;
    return 0;
}