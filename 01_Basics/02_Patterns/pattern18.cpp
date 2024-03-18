#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    char initial = 'A' + n - 1;

    for (int i = 0; i < n; i++)
    {
        for (char ch = initial - i; ch <= initial; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print(n);
}
