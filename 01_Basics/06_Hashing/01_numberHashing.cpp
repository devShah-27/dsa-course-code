#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    // precomputation
    int hash[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int queryItr;
    cin >> queryItr;

    for (int i = 0; i < queryItr; i++)
    {
        int query;
        cin >> query;
        cout << query << " - " << hash[query] << endl;
    }

    return 0;
}
