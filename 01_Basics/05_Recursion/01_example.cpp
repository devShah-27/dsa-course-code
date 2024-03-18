#include <bits/stdc++.h>
using namespace std;

int counter = 10;

void printFunc()
{
    if (counter == 3)
    {
        return;
    }
    cout << counter << endl;
    counter--;
    printFunc();
}

int main(int argc, char const *argv[])
{

    printFunc();
    return 0;
}
