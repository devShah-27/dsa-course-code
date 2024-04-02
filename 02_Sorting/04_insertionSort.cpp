#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            cout << j << endl;
            j--;
        }
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted Array: ";
    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl
         << endl;

    insertionSort(arr, size);

    cout << "Sorted Array: ";
    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
