#include<stdio.h>
#include<string.h>
int fun1(int a[],char b[][100]);
void fun2(int a[],char b[][100], int);
void fun3(int a[],char b[][100], int);
int main()
{
	int x,n;
	int flag = 0;
	char b[100][100];
	int a[100]= {0};

	while(1)
	{
		printf("请输入功能代码：\n\
		1：输入学生的姓名与成绩\n\
		2：将程序从高到低的次序排序\n\
		3：输出所有学生的姓名和C语言课程的成绩\n\
		输入其他任意字符结束本程序\n");
		scanf("%d", &x);
		switch(x)
		{
			case 1:n = fun1(a,b);break;
			case 2:fun2(a,b,n);break;
			case 3:fun3(a,b,n);break;
			default: flag = 1;
			break;
		}
		if(flag) 
		break;
	}
	return 0;
}
int fun1(int a[], char b[][100])
{
	int i, n;
	printf("请输入学生数量：\n");
	scanf("%d", &n);
	printf("请输入学生的姓名和C语言成绩:\n");
	for(i = 0; i< n; i++)
	{
		scanf("%s", b[i]);
		scanf("%d", &a[i]);
	}
	return n;
}

void fun2(int a[],char b[][100],int n)
{	
	int i,j,k,temp;
	char temp1[100];
	for(i = 0; i<n-1;i ++)
	{
		for(j = 0; j<n-i; j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				strcpy(temp1, b[j]);
				strcpy(b[j], b[j+1]);
				strcpy(b[j+1], temp1); 
			}
		}
	}
}
	
void fun3(int a[], char b[][100], int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("%d:%s %d\n",i+1,b[i], a[i]);
	}
}



