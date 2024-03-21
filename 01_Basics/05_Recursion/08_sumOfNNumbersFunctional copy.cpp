#include <bits/stdc++.h>
using namespace std;

int sumFunc(int input)
{
    if (input == 0)
    {
        return 0;
    }

    return input + sumFunc(input - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Input: " << n << endl;

    int ans = sumFunc(n);

    cout << "Sum: " << ans << endl;
    return 0;
}