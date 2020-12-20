#include <stdio.h>
#include <math.h>
void zimi(int );

int main()
{
	int k;
	do
	{
		scanf("%d", &k);
		if( k== 0)
		break;
		else zimi(k);
	}while(1);
	return 0;
}

void zimi (int n)
{
	int i,j,k,s,x,temp;
	for(i =pow(10,n-1);i<pow(10, n);i++)
	{
		s = 0;
		temp = i;
		for(j = 0;j<n;j++)
		{
			x = temp%10;
			s += pow( x, n);
			temp /=10;
		}
		if( s == i)
		printf("%d,", s);
	}
	 
}
