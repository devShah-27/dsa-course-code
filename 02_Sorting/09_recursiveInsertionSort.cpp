#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int i, int n)
{
    if (i == n)
    {
        return;
    }

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertionSort(arr, i + 1, n);
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

    insertionSort(input, 0, size);

    cout << "Array after sorting: ";
    for (auto it : input)
    {
        cout << it << " ";
    }

    return 0;
}