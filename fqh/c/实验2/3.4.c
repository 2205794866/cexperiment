#include<stdio.h>

int main()
{
	int i,j;
	for(i = 100; i<=999; i++)
	{
		j = i*i;
		if(i == j%1000)
		printf("%d\n",i);		
	}
	return 0;
}
