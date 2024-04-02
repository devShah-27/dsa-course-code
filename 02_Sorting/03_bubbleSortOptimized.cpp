#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int min;
    for (int i = size - 1; i >= 0; i--)
    {
        int didSwap = 0;
        cout << "Pass " << size - i << ":" << endl;
        for (int j = 0; j <= i - 1; j++)
        {
            cout << "Array: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        cout << endl
             << "---------------------------------" << endl;

        if(didSwap==0){
            break;
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

    bubbleSort(arr, size);

    cout << "Sorted Array: ";
    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
