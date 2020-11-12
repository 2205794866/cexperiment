#include<stdio.h>
int number(int i, int j);
int main(void)
{
    int i, j, m;
    int howmany_lines;
    scanf("%d",&howmany_lines);
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
    if (j==0)
        sum = 1;
    else
        sum = number(i, j-1)*(i - j + 1)/j;
    return sum;
}
