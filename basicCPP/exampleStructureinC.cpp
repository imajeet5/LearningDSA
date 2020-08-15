#include <stdio.h>

struct Rectangle
{
    int length;
    int breath;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breath = b;
};

int area(struct Rectangle r)
{
    return r.length * r.breath;
};

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
};

int main()
{
    struct Rectangle r;
    int len, breath;

    printf("Enter an length and breath: ");

    // reads and stores input
    scanf("%d %d", &len, &breath);

    initialize(&r, len, breath);

    // displays output
    printf("Area of rectangle is : %d\n", area(r));

    printf("Enter new length: ");
    scanf("%d", &len);
    changeLength(&r, len);
    printf("New area is: %d\n ", area(r));

    return 0;
}

// this is the style of programming we follow in C language