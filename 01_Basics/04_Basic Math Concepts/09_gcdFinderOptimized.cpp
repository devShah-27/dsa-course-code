#include <bits/stdc++.h>
using namespace std;

int findGcd(int num1, int num2)
{
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }

    if (num1 == 0)
    {
        return num2;
    }
    return num1;
}

int main(int argc, char const *argv[])
{
    int input1, input2;
    cin >> input1 >> input2;

    cout << "Input 1: " << input1 << endl;
    cout << "Input 2: " << input2 << endl;

    int ans = findGcd(input1, input2);

    cout << "------------------------------" << endl;

    cout << "GCD: " << ans;

    return 0;
}