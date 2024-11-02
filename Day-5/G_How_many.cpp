#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, count = 0;
    cin >> x >> y;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; i + j <= x; j++)
        {
            for (int k = 0; i + j + k <= x; k++)
            {
                if (i + j + k <= x && i * j * k <= y)
                    count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}