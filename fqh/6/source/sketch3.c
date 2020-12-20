#include <stdio.h>

int main()
{
    // struct A{
    //     int a;
    //     char b;
    //     short c;
    // };
    // struct B
    // {
    //     char b;
    //     int a;
    //     short c;
    // };
    struct C
    {
        double a;
        short b;
        int c;
        char d;
    };
    struct C c;
    printf("%p\n", &c.a);
    printf("%p\n", &c.b);
    printf("%p\n", &c.c);
    printf("%p\n", &c.d);
  

    return 0;
}