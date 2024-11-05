#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    int arr[n];
    int res[n];
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.find(arr[i]) == st.end())
        {
            st.insert(arr[i]);
        }
        res[i] = st.size();
    }

    while (m--)
    {
        int idx;
        cin >> idx;
        cout << res[idx - 1] << endl;
    }

    return 0;
}