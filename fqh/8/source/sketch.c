#include <stdio.h>

int main()
{
    char s[100] = "hello";
    char t[100];
    char *p = s, *p1 = t;
    while(*p1++ = *p++);
    return 0;
}