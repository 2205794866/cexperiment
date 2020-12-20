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