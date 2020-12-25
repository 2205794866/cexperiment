#include <stdio.h>
#include <stdlib.h>

struct bits
{
    unsigned bit0:1;
    unsigned bit1:1;
    unsigned bit2:1;
    unsigned bit3:1;
    unsigned bit4:1;
    unsigned bit5:1;
    unsigned bit6:1;
    unsigned bit7:1;
};

void f0(int n);
void f1(int n);
void f2(int n);
void f3(int n);
void f4(int n);
void f5(int n);
void f6(int n);
void f7(int n);


int main()
{
    void (*p_fun[8])(int n);
    p_fun[0] = f0;
    p_fun[1] = f1;
    p_fun[2] = f2;
    p_fun[3] = f3;
    p_fun[4] = f4;
    p_fun[5] = f5;
    p_fun[6] = f6;
    p_fun[7] = f7;
    struct bits b;
    unsigned int n;
    scanf("%u", &n);
    b.bit0 = n &0x1;
    n >>= 1;
    b.bit1 = n&0x1;
    n >>= 1;
    b.bit2 = n&0x1;
    n >>= 1;
    b.bit3 = n&0x1;
    n >>= 1;
    b.bit4 = n&0x1;
    n >>= 1;
    b.bit5 = n&0x1;
    n >>= 1;
    b.bit6 = n&0x1;
    n >>=1;
    b.bit7 = n&0x1;
    if(b.bit0)
    p_fun[0](0);
    if(b.bit1)
    p_fun[1](1);
    if(b.bit2)
    p_fun[2](2);
    if(b.bit3)
    p_fun[3](3);
    if(b.bit4)
    p_fun[4](4);
    if(b.bit5)
    p_fun[5](5);
    if(b.bit6)
    p_fun[6](6);
    if(b.bit7)
    p_fun[7](7);
    return 0;



}






void f0(int n)
{
    printf("the function %d is called!\n", n);
}

void f1(int n)
{
    printf("the function %d is called!\n", n);
}

void f2(int n)
{
    printf("the function %d is called!\n", n);
}

void f3(int n)
{
    printf("the function %d is called!\n", n);
}

void f4(int n)
{
    printf("the function %d is called!\n", n);
}

void f5(int n)
{
    printf("the function %d is called!\n", n);
}

void f6(int n)
{
    printf("the function %d is called!\n", n);
}

void f7(int n)
{
    printf("the function %d is called!\n", n);
}