#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> dq;

    dq.push_back(2);     // {2}
    dq.emplace_back(3);  //{2, 3}
    dq.push_front(1);    //{1, 2, 3}
    dq.emplace_front(0); //{0, 1, 2, 3}

    dq.pop_front(); //{1, 2, 3}
    dq.pop_back();  //{1, 2}

    // Other functions are similar to vectors and lists
    // begin, end, rbegin, rend, clear, insert, size, swap

    for (auto it : dq)
    {
        cout << it << " ";
    }

    return 0;
}
