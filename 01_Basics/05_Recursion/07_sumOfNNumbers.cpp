#include <bits/stdc++.h>
using namespace std;

void sumFunc(int i, int sum)
{
    if (i < 1)
    {
        cout << "Sum: " << sum << endl;
        return;
    }

    sumFunc(i - 1, sum + i);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Input: " << n << endl;

    sumFunc(n, 0);
    return 0;
}