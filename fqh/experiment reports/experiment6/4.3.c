#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void delete(char *t);
#define N 3
int main()
{   
    int i;
    char s[80];
    char *p[N];
    for(i = 0; i<N; i++)
    {
        gets(s);
        p[i] = (char*)malloc(strlen(s)+1);
        strcpy(p[i], s);
    }
    for(i = 0; i<N; i++)
    delete(p[i]);
    for(i = 0; i<N; i++)
    {
        printf("%s\n", p[i]);
        free(p[i]);
    }
    return 0;

}

void delete(char *t)
{
    char *t0 = t;
    int i = 0;
    while(*t==' '||*t == '\t')
    i++,t++;
    while (*(t0+i)!= '\0')
    {
        *t0 = *(t0+i);
        t0++;
    }
    *t0 = '\0';
}
