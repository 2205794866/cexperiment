/* 实验1-2程序分析与修改题源程序 */
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
	m = m^n;//交换m,n
}
k = 0;
while ((m&1)==0 && (n&1)==0)			/* m和n均为偶数 */
{
		m = m>>1;								/* 用2约简m和n */
		n = n>>1;
		k++;
}
p = 1;
p = p<<k;			/* 求p=2^k */
while((d=m-n)!=n)
{
		if(d>n) m = d;
		else
		{
			m-=(n=d);
		}
}
d *=p;
printf("the greatest common divisor : %d", d);
return 0;
}
