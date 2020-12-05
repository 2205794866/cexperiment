#include<stdio.h>
int main(int argv,char *args[])
{
	for(int i=1;i<argv;i++)
	{
		printf("%s ",args[i]);
	}
	return 0;
}