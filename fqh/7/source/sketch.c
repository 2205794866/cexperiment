#include<stdio.h>
#include<stdlib.h>
typedef struct _Node
{
    char s[20];
    struct _Node *next;
} Node;
int main()
{
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    scanf("%s", p->s);
    printf("%s是滴是滴\n", p->s);
    return 0;
}