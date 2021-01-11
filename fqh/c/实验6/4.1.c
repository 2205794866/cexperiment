#include <stdio.h>

int main()
{
    int i;
    long b;
    char *p;
    scanf("%d", &b);
    p =(char *)&b;
    for(i = 3;i>=0; i--)
    {
        printf("第%d个字节:\n", 4-i);
        printf("高四位:%x\n", *(p+i)>>4 &0xf);
        printf("低四位:%x\n", *(p+i)&0xf);
    }

    return 0;
}