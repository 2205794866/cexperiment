#include<stdio.h>
int main()
{
    int i, i_2, last_3;
    for (i=100;i<1000;i++)
    {
        i_2=i*i;
        last_3=i_2%1000;
        if(last_3==i)
            printf("%d\n",i);
    }
    return 0;
}