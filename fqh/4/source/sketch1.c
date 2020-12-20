#include <stdio.h>

int main()
{
	int a[1000] = {0};
	int n = 0,i,j;
	char c;
	
	
	while(1)
	{
		scanf("%d", &a[n]);
		if((c = getchar())== '\n')
		break;
		n++;	
	}
	for(i = 0; i<n; i++)
	{
		for(j = 0;j <n-i; j++)
		{
			int temp;
			if(a[j] > a[j+1] )
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i = 0; i<n; i++)
	printf("%d ", a[i]);
	printf("%d ", a[i]);
	return 0;
	
	
	
	
 } 
