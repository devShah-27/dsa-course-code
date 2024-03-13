#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int N, lastDigit;
    cin >> N;

    while (N > 0)
    {
        cout << N << endl;
        lastDigit = N % 10; // modulo 10 gives last digit
        N = N / 10;         // decreases a 10s place
        cout << "Digit: " << lastDigit << endl;
    }

    return 0;
}
