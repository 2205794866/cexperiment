#include <stdio.h>
int main()
{
    int c, space_num;
    space_num=0;
    while((c=getchar())!=EOF)
	{
        if (c!=' ')
		{
            putchar(c);
            space_num=0;
        }
        else 
		{
            space_num++;
            if (space_num<=1) putchar(c);
        }
    }
    return 0;
}