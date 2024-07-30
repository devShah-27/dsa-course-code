#include <bits/stdc++.h>
using namespace std;

// Bruteforce approach:------------------------------------------
// Sort the given array first. Then get the second last element of this sorted array. This element will be the second largest element.
// Time Complexity -> O(n + nlog(n))
// Space Complexity -> O(1)

/*
Better approach: -------------------------------------------------
Time Complexity -> O(n) + O(n) = O(2n)
Space Complexity -> O(1)

int getSecondLargest(vector<int> &arr, int n)
{
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
------------------------------------------------------------------
*/

// Optimal Approach: ---------------------------------------------
// Do this in a single pass. Keep two variables, one for largest and another for second largest.
// Update largest to be the largest element and the previous value of largest will now become the second largest.
int getSecondLargest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
//------------------------------------------------------------------

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

    int secondLargestNum = getSecondLargest(input, size);

    cout << "2nd Largest Element: " << secondLargestNum;

    return 0;
}