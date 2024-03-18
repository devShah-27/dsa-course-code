#include <bits/stdc++.h>
using namespace std;

int findGcd(int num1, int num2)
{
    // BRUTEFORCE:

    // vector<int> v1;
    // vector<int> v2;
    // for (int i = 1; (i * i) <= num1; i++)
    // {
    //     if (num1 % i == 0)
    //     {
    //         v1.emplace_back(i);
    //         if ((num1 / i) != i)
    //         {
    //             v1.emplace_back(num1 / i);
    //         }
    //     }
    // }
    // for (int i = 1; (i * i) <= num2; i++)
    // {
    //     if (num2 % i == 0)
    //     {
    //         v2.emplace_back(i);
    //         if ((num2 / i) != i)
    //         {
    //             v2.emplace_back(num2 / i);
    //         }
    //     }
    // }
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end());
    // vector<int> commonList;
    // for (auto it1 : v1)
    // {
    //     for (auto it2 : v2)
    //     {
    //         if (it1 == it2)
    //         {
    //             commonList.emplace_back(it1);
    //         }
    //     }
    // }
    // return commonList.back();

    // // OPTIMAL 1:
    // int gcd = 1;
    // for (int i = 1; i <= min(num1, num2); i++)
    // {
    //     if ((num1 % i == 0) && (num2 % i == 0))
    //     {
    //         gcd = i;
    //     }
    // }
    // return gcd;

    // Optimal 2:
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            return i;
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int input1, input2;
    cin >> input1 >> input2;

    cout << "Input1: " << input1 << endl;
    cout << "Input2: " << input2 << endl;

    int ans = findGcd(input1, input2);

    cout << "------------------------------" << endl;

    cout << "GCD: " << ans;

    return 0;
}