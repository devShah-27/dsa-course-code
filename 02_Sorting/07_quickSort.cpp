#include <bits/stdc++.h>
using namespace std;

int returnPartition(vector<int> &arr, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= arr[pivot] && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > arr[pivot] && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = returnPartition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
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

    cout << "Array before sorting: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    quickSort(input, 0, size - 1);

    cout << "Array after sorting: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}