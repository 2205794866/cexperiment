#include <stdio.h>

int main()
{
	char a[100];
	int x,i,temp;
	i = 0;
	scanf("%d", &x);
	temp = x;
	while(temp>0)
	{
		i++;
		temp /=2;
	 }
	 a[i] = '\0';
	i--; 
	for(;i>=0; i--)
	{
		a[i] = x%2 + '0';
		x /= 2; 
	}
	printf("%s", a);
	return 0;
}
