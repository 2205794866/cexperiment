#include<stdio.h>

int main()
{
	int i,x,y,z,n;
	i = 1;
	x = 1;
	y = 1;
	scanf("%d", &n);
	while(i <=n)
	{
		printf("%6d", x);
		z = x+y;
		x = y;
		y = z;
		if(i % 8 == 0)
		printf("\n");
		i++; 
	}
	return 0;
} 
