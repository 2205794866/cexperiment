#include<stdio.h>
#define CHANGE 1
int main()
{
	char a[100];
	#if CHANGE==0
	    scanf("%s",a);
	    printf("%s",a);
	#elif CHANGE==1
	    scanf("%s",a);
	    int i=0;
	    while(a[i])
	    {
	    	if ((a[i]<='z')&&(a[i]>='a'))
	    	{
	    		a[i]=a[i]-32;
			}
		    else if ((a[i]<='Z')&&(a[i]>='A'))
		    {
		    	a[i]=a[i]+32;
			}
			i++;
		}
		printf("%s",a);
	#endif
	return 0;
}