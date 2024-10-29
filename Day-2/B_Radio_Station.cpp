#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> iMap;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        iMap[ip] = name;
    }

    while (m--)
    {
        string cmnd, ip;
        cin >> cmnd >> ip;
        ip.pop_back();
        cout << cmnd << " " << ip << ";" << " " << "#" << iMap[ip] << endl;
    }
    return 0;
}