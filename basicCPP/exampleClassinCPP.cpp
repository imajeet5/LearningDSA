#include <iostream>

using namespace std;

class Reactangle
{
private:
    int length;
    int breath;

public:
    Reactangle()
    {
        length = breath = 1;
    };
    Reactangle(int l, int b)
    {
        length = l;
        breath = b;
    };
    int area()
    {
        return length * breath;
    };
    void changeLength(int l)
    {
        length = l;
    }
};

int main(int argc, char const *argv[])
{
    ;
    int len, breath;
    cout << "Enter a length and breath: " << endl;
    cin >> len >> breath;
    Reactangle r(len, breath);
    cout << "Area of Rectangle is " << r.area() << endl;
    cout << "Enter new length: " << endl;
    cin >> len;
    r.changeLength(len);
    cout << "New area is " << r.area() << endl;

    return 0;
}
