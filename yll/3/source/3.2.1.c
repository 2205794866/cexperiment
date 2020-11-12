/*实验3-1改错题程序：计算s=1!+2!+3!+…+n!*/
#include <stdio.h>
long long sum_fac(int n); //先声明
int main()
{
    int k;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}
long long sum_fac(int n) //long太小了装不下
{
    long long s=0;
    long long i,fac;
    fac = 1;  //fac先初始化
    for(i=1;i<=n;i++)
	{
		fac*=i;
		s+=fac;  //s的+要放在循环里面
    }
    return s;
}