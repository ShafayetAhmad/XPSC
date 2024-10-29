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
        string str;
        cin >> str;
        string res;
        vector<int> lastSmall, lastCap;
        for (char ch : str)
        {
            if (ch == 'B' && !lastCap.empty())
            {
                res[lastCap.back()] = '?';
                lastCap.pop_back();
            }
            else if (ch == 'b' && !lastSmall.empty())
            {
                res[lastSmall.back()] = '?';
                lastSmall.pop_back();
            }
            else if (islower(ch) && ch != 'b')
            {
                res.push_back(ch);
                lastSmall.push_back(res.size() - 1);
            }
            else if (isupper(ch) && ch != 'B')
            {
                res.push_back(ch);
                lastCap.push_back(res.size() - 1);
            }
        }
        for (char ch : res)
            if (ch != '?')
                cout << ch;
        cout << endl;
    }

    return 0;
}