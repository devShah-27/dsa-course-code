#include <bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n)
{
    if (i >= (n / 2))
    {
        return;
    }

    swap(arr[i], arr[n - i - 1]);

    reverseArray(i + 1, arr, n);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array: ";

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    reverseArray(0, arr, n);

    cout << "Reverse Array: ";

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
