#include <stdio.h>
int unit_num(int n)
{
	int i;
	for(i=2;i<=n>>1;i++)
	{
	    if(n%i==0)
	        return 1;
	}
	return 0;
}
int main()
{
    int i,a,b;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=i/10;
        if(unit_num(i)&&unit_num(a)&&unit_num(b)&&a>1)
        printf("%d\n",i);
    }
return 0;
}