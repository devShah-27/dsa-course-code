#include <bits/stdc++.h>
using namespace std;

// Bruteforce approach:--------------------------------------
// Sort the given array first. Then get the last element of this sorted array. This element will be the largest element.
// Time Complexity -> O(nlog(n))
// Space Complexity -> O(1)

// Optimal approach: ----------------------------------------
// Time Complexity -> O(n)
// Space Complexity -> O(1)
int getMaximum(vector<int> &arr, int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;

    vector<int> input;

    for (int i = 0; i < size; i++)
    {
        int inpNum;
        cin >> inpNum;
        input.emplace_back(inpNum);
    }

    cout << "Array: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    int maxNum = getMaximum(input, size);

    cout << "Max Element: " << maxNum;

    return 0;
}