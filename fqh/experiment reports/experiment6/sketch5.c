#include <stdio.h>

void swap(int *, int *);
int main()
{
    int a,b;
    int *p1,*p2;
    a =1,b=2;
    p1 = &a, p2 = &b;
    swap(p1,p2);
    printf("a = %d\nb = %d", a,b);

    return 0;
}

void swap (int *p1,int *p2)
{
    int a;
    int *p = &a;
    *p = *p1,*p1 = *p2, *p2 = *p;
}