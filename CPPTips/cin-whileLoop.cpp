#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int x;

    while (cin >> x)
    {
        sum = sum + x;
    }

    cout << sum;
    return 0;
}