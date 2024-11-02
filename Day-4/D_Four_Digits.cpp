#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    if (num / 10 == 0)
        cout << "000" << num << endl;
    else if (num / 100 == 0)
        cout << "00" << num << endl;
    else if (num / 1000 == 0)
        cout << "0" << num << endl;
    else
        cout << num << endl;
    return 0;
}