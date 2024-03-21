#include <bits/stdc++.h>
using namespace std;

long long getFibonacciOf(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return getFibonacciOf(n - 1) + getFibonacciOf(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Input: " << n << endl;

    cout << "Series: " << endl;

    for (int i = 0; i < n; i++)
    {
        long long ans = getFibonacciOf(i);
        cout << ans << " " << endl;
    }

    return 0;
}
