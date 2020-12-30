#include <stdio.h>
#include <math.h>
void pfn(long long);
int isprime(long long);
int main()
{
	int p;
	for(p = 2;p<15;p++)
	{
		if(isprime(p))
		{
			long long x,y;
			x = pow(2,p)-1;
			if(isprime(x))
			{
				long long z;
				y = pow(2,p-1);
				z = x*y;
				pfn(z);
			}
		}
	}
	return 0;
}

int isprime(long long n)
{
	int i,flag;
	flag = 1;
	for(i = 2;i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
	
}
void pfn(long long n)
{
	int i,j,s;
	s = 0;
	j = 0;
	int a[10000]= {0};
	for(i = 1; i<= (n>>1); i++)
	{
		if( n%i == 0)
		{
			a[j] = i;
			j++;
		}
	}
	j = 0;
	printf("%d=", n);
	printf("%d", a[j]);
	j++;
	while(a[j] != 0)
		{
			printf("+%d", a[j]);
			j++;		
		}
		printf("\n");
}
