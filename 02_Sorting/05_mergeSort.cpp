#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    cout << "Part: ";
    for (int i=low; i<=high; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(int argc, char const *argv[])
{
    vector<int> input;

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int number;
        cin >> number;
        input.push_back(number);
    }

    cout << "Input array: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    mergeSort(input, 0, size - 1);

    cout << "After merge sort: ";
    for (auto it : input)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
