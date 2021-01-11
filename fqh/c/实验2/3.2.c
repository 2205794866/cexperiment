#include<stdio.h>

int main()
{
	char c,is;
	is = 1;
	while((c = getchar()) !='\n')
	{
		if(c == ' ')
		{
			if(is)
			{	putchar(c);
				is = 0;
			}
		}
		
		else 
		{
		putchar(c);
		is =1;
	    }
	}
	return 0;
}
