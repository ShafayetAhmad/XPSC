#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        int idx = -1;
        for (int i = 0; i + 1 < n; i++)
            if (str[i] == str[i + 1])
                idx = i;
        if (idx == -1)
        {
            if (str.back() == 'a')
                cout << (str + "b") << endl;
            else
                cout << (str + "a") << endl;
        }
        else
        {
            string t = "a";
            if (str[idx] == 'a')
                t = "b";
            cout << str.substr(0, idx + 1) + t + str.substr(idx + 1) << endl;
        }
    }
}