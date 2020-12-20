#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4
/*对指针数组s指向的size个字符串进行升序排序*/
void strsort(char **s, int size) 
{
    char **s0 = s;
	char *temp;
	int i, j;
for(i=0; i<size-1; i++)
{
    s = s0;
	for (j=0; j<size-i-1; j++)
		{
            if (strcmp(*s, *(s+1)) > 0) 
		    {
			    temp = *s;
                *s = *(s+1);
			    *(s+1) = temp;
		    }
            s++;
        }
}
}

int main()
{
	int i;
	char *s[N], t[50];
	for (i=0; i<N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
		strcpy(s[i], t);
	}
	strsort(s,N);
	for (i=0; i<N; i++)	puts(s[i]);
	return 0;
}
