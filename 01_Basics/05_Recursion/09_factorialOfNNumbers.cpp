#include <bits/stdc++.h>
using namespace std;

long long fact(long long input)
{
    if (input == 1)
    {
        return 1;
    }

    return input * fact(input - 1);
}

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    cout << "Input: " << n << endl;

    long long ans = fact(n);

    cout << "Factorial: " << ans << endl;
    return 0;
}