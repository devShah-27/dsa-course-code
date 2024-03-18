#include <bits/stdc++.h>
using namespace std;

string checkPalindrome(int input)
{
    int initialInput = input;
    int revNum = 0, lastDigit;

    while (input > 0)
    {
        lastDigit = input % 10;
        input = input / 10;
        revNum = (revNum * 10) + lastDigit;
    }

    if (revNum != initialInput)
    {
        return "false";
    }
    else
    {
        return "true";
    }
}

int main(int argc, char const *argv[])
{
    int input;
    cin >> input;

    cout << "Number: " << input << endl;

    string output = checkPalindrome(input);

    cout << "Is palindrome?: " << output << endl;

    return 0;
}
