#include <stdio.h>
#include <math.h>
int is_veg(int n);
int main(void)
{
    int num, i = 2;
    scanf("%d", &num);
    while(!(is_veg(i) && is_veg(num-i)))  //两个都要是质数,否则下一个
        i++;
    printf("%d = %d + %d", num, i, num - i);
    return 0;
}
int is_veg(int n)
{
    int i, j;
    for (i = 2, j = (int)sqrt(n); i <= j; i++)
        if (n % i) //不能整除就继续
            continue;
        else
            return 0;
    return 1;
}