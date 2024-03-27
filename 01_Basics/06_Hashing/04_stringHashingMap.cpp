#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "------------------- input -----------------------" << endl;
    string s;
    cin >> s;
    cout << "Input: " << s << endl;

    cout << "---------------- pre-computation ----------------" << endl;
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << " => " << it.second << endl;
    }

    cout << "--------------- queries -------------------------" << endl;
    int queryItr;
    cin >> queryItr;
    while (queryItr--)
    {
        char query;
        cin >> query;
        cout << query << " - " << mpp[query] << endl;
    }

    return 0;
}
