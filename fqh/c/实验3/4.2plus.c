#include <stdio.h>
void pfn(int);

int main()
{
	int i;
	for(i = 1; i<=10000;i++)
	pfn(i);
	return 0;
}
void pfn(int n)
{
	int i,j,s;
	s = 0;
	j = 0;
	int a[100000]= {0};
	for(i = 1; i<= (n>>1); i++)
	{
		if( n%i == 0)
		{
			a[j] = i;
			j++;
		}
	}
	j = 0;
	while(a[j] != 0)
	{
		s += a[j];
		j++;
	}
	j = 0;
	if(s == n)
	{
		printf("%d\n", n);
//		printf("%d=", n);
//		printf("%d", a[j]);
//		j++;
//	while(a[j] != 0)
//		{
//			printf("+%d", a[j]);
//			j++;		
//		}
//	}
	}
//	else printf("%d is not a perfect number\n", n);
}

