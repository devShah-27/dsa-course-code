#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    int didSwap = 0;

    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = 1;
        }
    }

    if (didSwap == 0)
        return;

    bubbleSort(arr, n - 1);
}

int main(int argc, char const *argv[])
{
    vector<int> input;

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int inpNum;
        cin >> inpNum;
        input.emplace_back(inpNum);
    }

    cout << "Array before sorting: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    bubbleSort(input, size);

    cout << "Array after sorting: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}