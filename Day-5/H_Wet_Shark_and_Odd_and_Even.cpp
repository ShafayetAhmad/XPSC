#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sz, smallestOdd = INT_MAX;
    cin >> sz;
    long long int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        int num;
        cin >> num;
        sum += num;
        if (num % 2 && num < smallestOdd)
            smallestOdd = num;
    }
    if (sum % 2)
        cout << sum - smallestOdd << endl;
    else
        cout << sum << endl;
    return 0;
}