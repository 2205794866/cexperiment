#include <stdio.h>
#define M 10
#define N 3

int main()
{
	int a[M],b[M];
	int i,j,k;
	for(i = 0; i<M; i++)
		a[i] = i+1;
	for(i = M, j = 1; i>1; i--)
	{
		for(k = 1; k <= N;)
		{	
			if(i == M)
				k++;
			j++;
			if(j >M)
			j = 1;		
			if(a[j-1])
			k++;
		}
	b[M-i] = a[j-1];
	a[j - 1] = 0;
	}
	for(i = 0;i < M-1; i++)
	printf("%6d", b[i]);
	for(i = 0;i < M; i++)
		if(a[i]) 
	printf("%6d\n", a[i]);
	return 0;
 } 
