#include <bits/stdc++.h>
using namespace std;

int countDigit(int input)
{
    int counter = 0;
    while (input > 0)
    {
        input = input / 10;
        counter++;
    }

    return counter;
}

string checkArmstrongNumber(int input, int digitCount)
{
    int initialVal = input;
    int sum = 0, lastDigit;

    while (input > 0)
    {
        lastDigit = input % 10;
        input = input / 10;
        sum = sum + pow(lastDigit, digitCount);
    }

    if (initialVal == sum)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main(int argc, char const *argv[])
{
    int input;
    cin >> input;

    cout << "Number: " << input << endl;

    int digitCount = countDigit(input);

    cout << "Number of digits: " << digitCount << endl;

    string output = checkArmstrongNumber(input, digitCount);

    cout << "Is armstrong number?: " << output << endl;

    return 0;
}
