#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> mpp;

    mpp[1] = 2;        // {1, 2}, where 1 is key, 2 is value
    mpp.emplace(3, 1); // {{1, 2}, {3, 1}}
    mpp.emplace(2, 4); // {{1, 2}, {2, 4}, {3, 1}}

    map<pair<int, int>, int> mpp2;

    mpp2[{1, 2}] = 3; // {{1, 2}, 3} where {1, 2} is key and 3 is value

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second;
        cout << endl;
    }

    for (auto it : mpp2)
    {
        cout << "{" << it.first.first << " " << it.first.second << "}"
             << " " << it.second;
        cout << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[2] << endl;

    auto it = mpp.find(3);
    cout << (*it).second << endl;

    mpp.find(5); // points to space just after the map

    return 0;
}
