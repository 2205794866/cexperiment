#include<stdio.h>

int main()
{
	unsigned long a;
	while(scanf("%llu",&a)!= EOF)
	{
		unsigned int h,j,k,l;
	    h = a>>24;
	    j = a<<8>>24;
	    k = a<<16>>24;
	    l = a<<24>>24;
	    printf("%u.%u.%u.%u", h,j,k,l);
	}
	return 0;
}