#include <stdio.h>
int main()
{
    char u[] = "UVWXYZ";
    char v[] = "xyz";
    struct T
    {
        int x;
        char c;
        char *t;
    } a[] = {{11, 'A', u}, {100, 'B', v}}, *p = a;
    //printf("%d", (++p)->x); //100
    //printf("%c", (p++, p->c)); //B
    //printf("%c", (*p++->t, *p->t)); //x
    //printf("%c", *(++p)->t); //x
    printf("");
    return 0;
}