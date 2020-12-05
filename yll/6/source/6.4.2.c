#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int num[m][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&num[m-1-j][i]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}