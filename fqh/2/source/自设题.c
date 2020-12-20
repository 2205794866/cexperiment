#include<stdio.h>

int main()
{
	int k,n,i,j,s,t;
	scanf("%d", &k);
	n = 0,s = 0, i =1;
	while( s<k)
	{
		for(j = 1; j<=i; j++)
		{
			n += i;
			s +=1;
			if (s == k)
			break;
		}
		i++; 
	} 
	printf("%d", n);
	return 0;
}
