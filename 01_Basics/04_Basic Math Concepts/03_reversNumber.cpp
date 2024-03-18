#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int input)
{
    int revNum = 0, lastDigit;

    while (input > 0)
    {
        lastDigit = input % 10;
        input = input / 10;
        revNum = (revNum * 10) + lastDigit;
    }

    return revNum;
}

int main(int argc, char const *argv[])
{
    int input;
    cin >> input;

    cout << "Number: " << input << endl;

    int output = reverseNumber(input);

    cout << "Reverse: " << output << endl;

    return 0;
}
