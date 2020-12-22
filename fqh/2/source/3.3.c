#include <stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	int a[number+1][number+1];
	int i,j,k;
	k = 0;
	for(i=0; i<=number; i++)
	{
	a[i][0] = 1;
	}
	for(i = 0; i<=number; i++)
	{
		for(j = 1; j<=i; j++)
		{
			a[i][j]= a[i][j-1]*(i-j+1)/j;	
		}
	}
	for(i =0; i<=number; i++)
	{	
		while(k<2*number-2*i)
		{
			printf(" ");
			k++;
		}
		k = 0;
		for(j = 0; j<=i; j++)
		{ 
		printf("%d", a[i][j]);
		if(a[i][j] /100)
		printf(" ");
		else if(a[i][j]/10)
		printf("  ");
		else printf("   ");
		} 
		if(i<=number)
		printf("\n");
	}
	return 0;
} 
