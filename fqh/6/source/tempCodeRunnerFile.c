#include <stdio.h>

int main()
{
    char s[9];
    char *p = s;
    int a,i;
    long b;
    scanf("%d", &b);
    for(i = 0; i<8; i++)
    {
        a = b>>4*(7-i) & 0xF;
        if(a>9)
        *p = a-10+'A';
        else 
        *p = a+'0';
        p++;
    }
    p = '\0';
    printf("%s", s);
    return 0;
}