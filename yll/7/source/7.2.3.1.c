#include <stdio.h>
struct bits
{
    unsigned short int bit0 : 1;
    unsigned short int bit1 : 1;
    unsigned short int bit2 : 1;
    unsigned short int bit3 : 1;
    unsigned short int bit4 : 1;
    unsigned short int bit5 : 1;
    unsigned short int bit6 : 1;
    unsigned short int bit7 : 1;
} a;
void f0(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f1(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f2(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f3(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f4(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f5(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f6(int tmp)
{
    printf("the function % d is called !\n", tmp);
}
void f7(int tmp)
{
    printf("the function % d is called !\n", tmp);
}

int main()
{
    void (*p[8])(int) = {f0, f1, f2, f3, f4, f5, f6, f7};
    unsigned short int n = 15;
    a.bit0 = n & 0x1;
    n >>= 1;
    a.bit1 = n & 0x1;
    n >>= 1;
    a.bit2 = n & 0x1;
    n >>= 1;
    a.bit3 = n & 0x1;
    n >>= 1;
    a.bit4 = n & 0x1;
    n >>= 1;
    a.bit5 = n & 0x1;
    n >>= 1;
    a.bit6 = n & 0x1;
    n >>= 1;
    a.bit7 = n & 0x1;
    if (a.bit0)
        p[0](0);
    if (a.bit1)
        p[1](1);
    if (a.bit2)
        p[2](2);
    if (a.bit3)
        p[3](3);
    if (a.bit4)
        p[4](4);
    if (a.bit5)
        p[5](5);
    if (a.bit6)
        p[6](6);
    if (a.bit7)
        p[7](7);
    return 0;
}