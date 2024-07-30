#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr, int n)
{
    int didRemove = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        if (arr[j] == arr[i])
        {
            while (j < n)
            {
                arr[j - 1] = arr[j];
                j++;
                didRemove = 1;
            }
        }
    }

    if (didRemove == 1)
    {
        arr.pop_back();
    }
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

    removeDuplicates(input, size);

    cout << "After removing: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    // cout << endl;

    return 0;
}