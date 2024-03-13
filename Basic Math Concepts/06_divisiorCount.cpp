#include <bits/stdc++.h>
using namespace std;

void printDivisors(int input)
{
    vector<int> ls;

    cout << "Divisors: ";

    // Time complexity: O(sqrt(n))
    for (int i = 1; (i * i) <= input; i++)
    {
        if (input % i == 0)
        {
            ls.push_back(i);
            if ((input / i) != i)
            {
                ls.push_back(input / i);
            }
        }
    }

    // Internal sorting function. O(nlog(n)) where n is number of factors
    sort(ls.begin(), ls.end());

    // Iterator. O(n) where n is number of factors
    for (auto it : ls)
    {
        cout << it << " ";
    }

    // Total Complexity: O(sqrt(n))+O(nFactorCount*log(nFactorCount))+O(nFactorCount)
}

int main(int argc, char const *argv[])
{
    int input;
    cin >> input;

    cout << "Input: " << input << endl;

    printDivisors(input);

    return 0;
}