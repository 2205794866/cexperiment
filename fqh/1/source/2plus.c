#include <stdio.h>
int main( )
{
int m, n, k, p, i, d;
printf("input m, n \n");
scanf("%d%d", &m, &n);
if (m<n)									/* 交换m和n */
{ 
	m = m^n;
	n = m^n;
	m = m^n;								//使用三个异或来达到交换变量的目的 
}
k = 0;
while (m & 2 == 2 &&  n&2 == 2)			/* m和n均为偶数 *///用两个且来判断是否为偶数 
{
		m >>=1;								/* 用2约简m和n */
		n >>=1;								//向右移一位达到处以2的目的 
		k++;
}
p <<=k;			/* 求p=2k *///向左移一位达到乘2的目的 
while((d=m-n)!=n)
{
		if(d>n) m = d;
		else
		m-=(n=d);					//()内作赋值运算的同时进行计算 
}
d *=p;
printf("the greatest common divisor : %d", d);
return 0;
}
