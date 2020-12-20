#include <stdio.h>
int main( )
{
int m, n, k, p, i, d;
printf("input m, n \n");
scanf("%d%d", &m, &n);
if (m<n)									/* 交换m和n */
{
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;  
}
k = 0;
while (m%2 == 0 && n%2 == 0)			/* m和n均为偶数 */
{
		m /= 2;								/* 用2约简m和n */
		n /= 2;
		k++;
}
for (p = 1, i = 0; i<k; i++)  p *= 2;			/* 求p=2k */
while((d=m-n)!=n)
{
		if(d>n) m = d;
		else
		{
			m = n;
			n = d;
		}
}
d *=p;
printf("the greatest common divisor : %d", d);
return 0;
}

