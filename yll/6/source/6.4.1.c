#include<stdio.h>
int main()
{
	int num=0;
	scanf("%d",&num);
	char *p=&num;
	for(int i=3;i>=0;i--)
	{
		printf("%d:high:%x low:%x\n",4-i,(*(p+i)>>4)&0x000F,(*(p+i))&0x000F);
	}
	return 0;
}