#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //------------------- input -----------------------
    cout << "------------------- input -----------------------" << endl;
    int n;
    cin >> n;

    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << "Input: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    //---------------- pre-computation ----------------
    cout << "---------------- pre-computation ----------------" << endl;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[input[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "~" << it.second << endl;
    }

    //--------------- queries -------------------------
    cout << "--------------- queries -------------------------" << endl;
    int queryItr;
    cin >> queryItr;

    while (queryItr--)
    {
        int query;
        cin >> query;
        cout << query
             << " - " << mpp[query] << endl;
    }

    return 0;
}
