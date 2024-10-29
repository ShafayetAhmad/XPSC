#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string find(unordered_map<string, string> parent, string handle)
{
    if (parent[handle] == handle)
    {
        return handle;
    }
    return parent[handle] = find(parent, parent[handle]); 
}

int main()
{
    int q;
    cin >> q;

    unordered_map<string, string> parent;
    unordered_map<string, string> final;

    for (int i = 0; i < q; ++i)
    {
        string prev, curr;
        cin >> prev >> curr;

        if (parent.find(prev) == parent.end())
        {
            parent[prev] = prev;
        }

        string org = find(parent, prev);

        parent[curr] = org;

        final[org] = curr;
    }

    cout << final.size() << endl;
    for (const auto it : final)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
