#include <bits/stdc++.h>
using namespace std;

void printFunc(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << "~~~~~~ " << i << " ~~~~~~" << endl;
    printFunc(i - 1, n);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    printFunc(n, n);
    return 0;
}
