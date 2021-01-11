#include <stdio.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int i = 0;
	int j;
	scanf("%s", &s);
	while(s[i] != '\0')
	i++;
	for(j = i-1;j >=0;j--)
	{
		printf("%c", s[j]);
	}	
	
	return 0;
}
