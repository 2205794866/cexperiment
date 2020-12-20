#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char s1[100], s2[100], *s3;                 //s1与s2应用字符串数组来存储字符串
	printf("Input a string:\n", s2);
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n", s2);
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
    char *t0;                       //定义一个指针t0暂时存储t的首地址
    t0 = t;
	while(*t++ = *s++);
	return (t0);
}
