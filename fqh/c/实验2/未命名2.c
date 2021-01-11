#include<stdio.h>
#define howmany_lines 10
int number(int i, int j);
int main(void)
{
    int i, j, m;
    for(i = 0; i < howmany_lines; i++)
    {
        for(m = howmany_lines-i-1; m > 0; m--)
            printf("  ");
        for(j = 0; j <= i; j++)
            printf("%-4d", number(i, j));
        printf("\n");
    }
    return 0;
}
int number(int i, int j)
{
    int sum;
    if (!j)
        sum = 1;
    else
        sum = number(i, j-1)*(i - j + 1)/j;
    return sum;
}

