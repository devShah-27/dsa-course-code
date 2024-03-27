#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    cout << "String: " << s << endl;

    // precomputation
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int queryItr;
    cin >> queryItr;

    while (queryItr--)
    {
        char query;
        cin >> query;
        cout << query << " - " << hash[query] << endl;
    }

    return 0;
}
