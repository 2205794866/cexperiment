#include <stdio.h>

int main()
{
	int n,x,y,flag,i,j,x1,y1;
	scanf("%d", &n);
	for(x = 12345;x<=98765;x++)
	{
		int a[10] = {0};
		i=0;
		flag = 1;
		x1 =x;
		if( x % n ==0)
		{
			y = x/n;
			y1 = y;
			for(i = 0;i<=4;i++)
			{
				a[i] = x1%10;
				x1 /=10;
			}
			for(i=5;i<=9;i++)
			{
				a[i] = y1%10;
				y1 /=10;
			}
			for(i = 0;i<=9;i ++)
			{
				for(j = 0;j <=9;j++)
				{
					if(i != j)
					{
						if(a[i] == a[j])
						{	
						flag = 0;
						break;
						}
					}
				}
				if(flag == 0)
				break;
			}
			if (flag == 1)
			printf("%05d/%05d=%d\n", x,y,n);
		}
	}
	return 0;
}
