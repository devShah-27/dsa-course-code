#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Set stores unique elements in sorted order
    set<int> s1;

    s1.insert(1);  //{1}
    s1.insert(2);  //{1, 2}
    s1.emplace(2); //{1, 2}. Does not store repeating elements
    s1.emplace(4); //{1, 2, 4}
    s1.emplace(3); //{1, 2, 3, 4}
    s1.emplace(5); //{1, 2, 3, 4, 5}

    auto it1 = s1.find(3); // Find method returns an iterator that points to the element passed as argument
    cout << *(it1) << endl;

    auto it2 = s1.find(7); // If element is not found, it always returns s1.end()

    s1.erase(5); // Erases 5. Takes logarithmic time. {1, 2, 3, 4}

    int count = s1.count(1); // Returns 1 if element is present (as set can have one unique element only), else returns 0.

    auto it3 = s1.find(3);
    s1.erase(it3); // Erases 3. Takes constant time. {1, 2, 4}

    auto it4 = s1.find(1);
    auto it5 = s1.find(4);
    s1.erase(it4, it5); // Exclusive of end element. {4}

    return 0;
}
