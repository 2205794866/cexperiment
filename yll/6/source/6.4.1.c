#include<stdio.h>
int main()
{
	int num=199;
	char *p=&num;
	for(int i=0;i<4;i++)
	{
		printf("%d:high:%x low:%x\n",i,(*(p+i)>>4)&0x000F,(*(p+i))&0x000F);
	}
	return 0;
}