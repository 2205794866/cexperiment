#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "sadabcfg";
    char *t = "abc";
    char *ret1;
    char *ret2;

    char *(*p[2])(const char *, const char *);
    p[0] = strpbrk;
    p[1] = strstr;
    ret1= p[0](s,t);
    ret2 = p[1](s,t);
    printf("%s\n", ret1);
    printf("%s\n", ret2);
    return 0;
}