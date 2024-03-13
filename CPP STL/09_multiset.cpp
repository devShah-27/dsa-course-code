#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Create a multiset to store any number of elements in sorted order.
    // Elements can repeat in occurrence as well.
    multiset<int> ms;

    // Insert elements into the multiset.
    ms.insert(1);  // {1}
    ms.emplace(1); // {1, 1}
    ms.emplace(1); // {1, 1, 1}
    ms.emplace(3); // {1, 1, 1, 3}

    // Erase all occurrences of the value 1 from the multiset.
    ms.erase(1);

    // Add new elements to the multiset.
    ms.emplace(1); // {1, 3}
    ms.emplace(1); // {1, 1, 3}

    // Count the occurrences of the value 1 in the multiset.
    int my_count = ms.count(1);

    // Print the count.
    cout << "Count of 1: " << my_count << endl;

    // Erase a single element using the iterator returned by find().
    ms.erase(ms.find(1)); // {1, 3}

    // Add more elements.
    ms.emplace(1); // {1, 1, 3}
    ms.emplace(1); // {1, 1, 1, 3}

    // Erase a range of elements using iterators.
    auto it1 = ms.find(1);
    auto it2 = std::next(it1, 2); // Advance the iterator by 2 steps
    ms.erase(it1, it2);           // {1, 3}

    // All other functions work similarly to a set.

    return 0;
}
