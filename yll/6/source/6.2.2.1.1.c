#include<stdio.h>
#include<stdlib.h>  //malloc在stdlib里面
#include<string.h>
#define N 4
/*对指针数组s指向的size个字符串进行升序排序*/
void strsort(char *s[], int size)
{
	char *temp;  //从后面来看temp是指针
	int i, j;
	for(i=0; i<size-1; i++)
	{
		for (j=0; j<size-i-1; j++)  //此处应为j<size-i-1;
		if (strcmp(s[j],s[j+1])>0)  //升序排序
		{
			temp = s[j];
    		s[j] = s[j+1];
			s[j+1] = temp;
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
		strcpy(s[i],t);  //此处将t存入新开辟的空间
	}
	strsort(s,i);  //此处调用排序函数
	for (i=0; i<N; i++)	puts(s[i]);
	return 0;
}
