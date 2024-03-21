#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(int i, string input)
{
    if (i >= input.size() / 2)
    {
        return true;
    }

    if (input[i] != input[input.size() - i - 1])
    {
        return false;
    }

    return palindromeCheck(i+1, input);
}

int main(int argc, char const *argv[])
{
    string n;
    cin >> n;

    cout << "String: " << n << endl;

    int size = n.size();

    bool isPalindrome = palindromeCheck(0, n);

    cout << "Is Palindrome?: ";

    if (isPalindrome == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
