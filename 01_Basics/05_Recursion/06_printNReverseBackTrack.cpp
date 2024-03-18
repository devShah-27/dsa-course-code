#include <bits/stdc++.h>
using namespace std;

void printFunc(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printFunc(i + 1, n);
    cout << "~~~~~~ " << i << " ~~~~~~" << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    printFunc(1, n);
    return 0;
}
