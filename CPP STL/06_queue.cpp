#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> qu;

    qu.push(1);    //{1}
    qu.push(2);    //{1, 2}
    qu.emplace(3); //{1, 2, 3}

    qu.back() += 5; //{1, 2, 8}

    cout << qu.back() << endl; // prints last element

    cout << qu.front() << endl; // prints first element

    qu.pop(); // Deletes the first element. Removes 1 in this case {2, 8}.

    cout << qu.front() << endl; // prints first element

    return 0;
}
