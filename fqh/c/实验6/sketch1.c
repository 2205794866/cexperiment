#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *s;
    s = (char *)malloc(100);
    char p[100] = "abc";
    char t[10] = "def";
    s = strcat(p, t);
    printf("%s\n", s);
    s = strcat(s, p);
    printf("%s\n", s);
    printf("%c\n", s[0]);
    return 0;
}