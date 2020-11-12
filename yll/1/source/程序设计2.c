#include<stdio.h>
int main()
{
	unsigned short x, m, n;
	scanf("%x %hu %hu",&x,&m,&n);
	if (!(((m>=0)&&(m<=15))&&((n>=1)&&(n<=16-m))))//如果0 ≤ｍ≤ 15, 1 ≤ ｎ≤ 16-m继续,否则结束
	{
		printf("参数范围错误");
		return 0;
	}
	x = x>>m;
	x = x<<(16-n);
	printf("%x",x);
	return 0;
}