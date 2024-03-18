#include <bits/stdc++.h>
using namespace std;

int countProblem(int n)
{
    int nUnchanged = n;
    int counter = 0;
    int lastDigit;

    while (n > 0)
    {
        lastDigit = n % 10;

        if (lastDigit > 0 && (nUnchanged % lastDigit) == 0)
        {
            counter += 1;
        }

        n = n / 10;
    }

    return counter;
}

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;

    int answer = countProblem(n);

    cout << answer;

    return 0;
}
