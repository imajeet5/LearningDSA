#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // A pointer to a pointer is a form of multiple indirection or a chain of pointers. Normally, a pointer contains the address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value
    int **A;
    // Array of pointers of type integer
    A = new int *[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    // The entire structure is in heap now except the varaiable pointer to pointer.
    

    return 0;
}