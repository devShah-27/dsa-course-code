#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> ls;

    //In a list, the insert operations are faster as compared to vectors as it uses a doubly linked list in the backend for its operations.

    ls.push_back(1);    // {1}
    ls.emplace_back(2); //{1, 2}

    ls.push_front(0); //{0, 1, 2}

    // Other functions are similar to vectors
    //begin, end, rbegin, rend, clear, insert, size, swap

    for (auto it : ls)
    {
        cout << it << " ";
    }

    return 0;
}
