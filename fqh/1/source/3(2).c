#include <stdio.h>
int main()
{
	unsigned short x,m,n;
	scanf("%x %hu %hu", &x, &m, &n);
	if(!((m>=0 && m <= 15)&&(n>=1&&n<=16 - m)))
	printf("ÊäÈë´íÎó!\n");
	else{
		x >>= m;
		x <<= (16-n);
		printf("%X", x);
		}
	return 0;

} 
