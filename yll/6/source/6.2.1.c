#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char *s1, *s2, *s3;
	char str1[20],str2[20],str3[20];
	s1=str1,s2=str2,s3=str3;  //给指针指定空间
	printf("Input a string:\n");  //不用s2
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	//s1=str1;  //指针复位，如果不是从头开始则不必复位
	printf("Input a string again:\n");  //不用s2
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
	char *tmp=t;  //先暂存串t开头的位置来返回
	while(*t++ = *s++);
	return (tmp);
}