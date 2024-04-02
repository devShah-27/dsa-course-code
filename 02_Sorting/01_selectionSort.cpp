#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size)
{
    int min;
    for (int i = 0; i <= size - 2; i++)
    {
        min = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);

        cout << "Pass " << i + 1 << " done" << endl;
        cout << "Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << "---------------------------------" << endl;
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

    selectionSort(arr, size);

    cout << "Sorted Array: ";
    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
