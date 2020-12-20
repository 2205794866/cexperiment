#include <stdio.h>
int k = 0;
int gd(int);
int a[1000];
void isprime(int);
int main()
{
	int n;
	scanf("%d", &n);
	if(n >=4 && n%2 == 0)
	{
		isprime(n);
		gd(n);
	}
	return 0;
} 


int gd(int n)
{
	int j,i;
	for(i = 0; i<=k;i++)
	{
		for(j = 0;j <= k;j++)
		{
			if(a[i]+a[j]== n)
			printf("%d=%d+%d\n", n, a[i], a[j]);
		}
	}
}
void isprime(int n)
{
	int i,j,flag;
	for(i = 2;i<=n;i ++)
	{
		flag  = 1; 
		for(j = 2 ; j<=i/2;j ++)
		{
			if( i%j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			a[k] = i;
			k++;
		}
	}
}


 
 
