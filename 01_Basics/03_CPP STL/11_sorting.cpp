#include <bits/stdc++.h>
using namespace std;

// bool comp(pair<int, int> p1, pair<int, int> p2) // compares the elements of pair according to the given condition
// {
//     if (p1.second < p2.second)
//         return true;

//     else if (p1.second > p2.second)
//         return false;

//     else if (p1.first > p2.first)
//         return true;

//     return false;
// }

int main(int argc, char const *argv[])
{
    // int a = 0;
    // int n = 0;

    // vector<int> v;

    // sort(a, a + n);
    // sort(v.begin(), v.end());

    // sort(a + 2, a + 4);

    // sort(a, a + n, greater<int>());

    // pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    // // Sort the pair according to the second element
    // // If second element is same, sort according to first element but in decreasing order

    // sort(a, a + n, comp);

    //--------------------------------------------------------------------------------------------------------------------------------------

    int num = 7;
    int count = __builtin_popcount(num); // It counts the number of 1’s in the binary form of a positive integer

    cout << count << endl;

    long long num2 = 983257847365;
    int count2 = __builtin_popcountll(num2);

    cout << count2 << endl;

    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

    string s = "312";
    sort(s.begin(), s.end()); // Always start by sorting the data in order to get all possible permutations

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // It is used to rearrange the elements in the range [first, last) into the next lexicographically greater permutation

    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

    int arr[] = {3, 2, 4, 3, 5, 2, 9, 6, 7, 8, 10, 3, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxe = *max_element(arr, arr + n);
    int mine = *min_element(arr, arr + n);

    cout << maxe << endl;
    cout << mine << endl;

    return 0;
}
