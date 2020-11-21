#include<stdio.h>
void strnins(char a[],char b[],int n);
int main()
{
	char a[100],b[100];
	int n=0;
	scanf("%s %s %d",&a,&b,&n);
	strnins(a,b,n);
	printf("%s",a);
	return 0;
}

void strnins(char a[],char b[],int n)
{
	int i=n;
	int j=0;
	while(b[j])
	{
		a[i] = b[j];
		i++;
		j++;
	}
	a[i+1]='\0';
}