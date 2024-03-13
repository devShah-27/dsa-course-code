#include <bits/stdc++.h>
using namespace std;

string primeCheck(int input)
{
    int counter = 0;

    for (int i = 1; (i * i) <= input; i++)
    {
        if ((input % i) == 0)
        {
            counter += 1;
            if ((input / i) != i)
            {
                counter += 1;
            }
        }
    }

    if (counter > 2)
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

    cout << "Input: " << input << endl;

    string isPrime = primeCheck(input);

    cout << "Is Prime?: " << isPrime << endl;

    return 0;
}