#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s1[100],s2[100];
	int a[100]={0},b[100]={0},c[100]={0};
	scanf("%s%s",&s1,&s2);
	int la,lb,lc;
	//字符串转为数字，并且转置
	la=strlen(s1);
	lb=strlen(s2);
	for(int i=0,j=0;i<la;i++)
	{
		if(s2[i]=='.')
		{
			continue;
		}
		a[la-i] = s1[i]-'0';
	}
	for(int i=0;i<lb;i++)
	{
		if(s2[i]=='.')
		{
			continue;
		}
		b[lb-i] = s2[i]-'0';
	}
	lc = 31;
	for(int i=1;i<=lc;i++)
	{
		c[i] += a[i] + b[i];
		c[i+1] = c[i]/10;
		c[i] = c[i]%10;
	}
	if(c[11])
	{
		c[12]+=c[11];
		for(int i=12;i<=lc;i++)
		{
			c[i+1] += c[i]/10;
			c[i] = c[i]%10;
		}
	}
	if(c[lc]==0&&lc>0) lc--;
	for(int i=lc;i>11;i--)
	{
		printf("%d",c[i]);
	}
	printf(".");
	for(int i=10;i>0;i--)
	{
		printf("%d",c[i]);
	}
	return 0;
}