#include <iostream>
#include <vector>

using namespace std;

int getBinary(int n)
{
    vector<int> binary_vec;
    while (n != 0)
    {
        binary_vec.push_back(n % 2);
        n /= 2;
    }
    for (auto i = binary_vec.rbegin(); i != binary_vec.rend(); i++)
    {
        cout << *i;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int x{};
    cout << "Enter a integer" << endl;
    cin >> x;
    getBinary(x);
    return 0;
}