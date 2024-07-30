#include <bits/stdc++.h>
using namespace std;

string isSorted(vector<int> &arr, int n)
{
    string sort = "true";

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            sort = "false";
            break;
        }
    }

    return sort;
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

    string isSort = isSorted(input, size);

    cout << "Sorted?: " << isSort;

    return 0;
}