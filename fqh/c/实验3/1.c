#include <stdio.h>
long long sum_fac(int); //未申明函数,返回值应用longlong 
 
int main(void)
{
    int k;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));//%lld输出 
    return 0;
}
long long sum_fac(int n)
{
    long long s=0;
    long long fac;//s ,fac类型应用long long 
    int i;
    fac = 1; //fac未初始 
   for(i=1;i<=n;i++)
    {	
		fac*=i;
    	s+=fac;    //累加应在循环内部 
    }
    return s;
}

