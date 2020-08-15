#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
class Arithametic
{
private:
    T a;
    T b;

public:
    Arithametic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
    this->a = a;
    this->b = b;
};

template <class T>
T Arithametic<T>::add()
{
    T c;
    c = a + b;
    return c;
};

template <class T>
T Arithametic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main(int argc, char const *argv[])
{
    Arithametic<int> intAr(10, 5);
    Arithametic<double> doubleAr(10.0, 5.0);
    cout << intAr.add() << endl;
    cout << setprecision(2) << fixed;
    cout << setprecision(2) <<  doubleAr.add() << endl;

    return 0;
}
