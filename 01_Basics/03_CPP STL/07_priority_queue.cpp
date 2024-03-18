#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    // Also known as Maximum Heap
    priority_queue<int> pq1;

    pq1.push(5);     //{5}
    pq1.push(2);     //{5, 2}
    pq1.push(7);     //{7, 5, 2}
    pq1.emplace(3);  //{7, 5, 3, 2}
    pq1.emplace(10); //{10, 7, 5, 3, 2}
    pq1.emplace(8);  //{10, 8, 7, 5, 3, 2}

    cout << pq1.top() << endl;

    pq1.pop(); //{8, 7, 5, 3, 2}
    cout << pq1.top() << endl;

    // Storing in increasing order in priority queue:

    // Also known as Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);     //{5}
    pq2.push(2);     //{2, 5}
    pq2.push(7);     //{2, 5, 7}
    pq2.emplace(3);  //{2, 3, 5, 7}
    pq2.emplace(10); //{2, 3, 5, 7, 10}
    pq2.emplace(8);  //{2, 3, 5, 7, 8, 10}

    cout << pq2.top() << endl;

    pq2.pop(); //{3, 5, 7, 8, 10}
    cout << pq2.top() << endl;

    return 0;
}
