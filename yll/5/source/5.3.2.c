#include<stdio.h>
#include<windows.h>
#include <string.h>

char name[100][10]={};
char name_temp[100][10]={};
int score[100]={0};
int score_temp[100]={0};

void input();
void sort();
void output();
void search();
void sort2();

int main()
{
	static char temp;
	system("title 学生成绩管理系统 by yll");
	start:
	system("Cls");
	printf("-----------------------\n");
	printf("|   学生成绩管理系统   |\n");
	printf("-----------------------\n");
	printf("|    1    |输入学生成绩|\n");
	printf("-----------------------\n");
	printf("|    2    | 按成绩排序 |\n");
	printf("-----------------------\n");
	printf("|    3    |输出所有成绩|\n");
	printf("-----------------------\n");
	printf("|    4    |  查找成绩  |\n");
	printf("-----------------------\n");
	printf("|    5    |  退出系统  |\n");
	printf("-----------------------\n");
	scanf("%c",&temp);
	if (temp=='1')
	{
		input();
	}
	if (temp=='2')
	{
		sort();
	}
	if (temp=='3')
	{
		output();
	}
	if (temp=='4')
	{
		search();
	}
	if (temp=='5')
	{
		return 0;
	}
	else
	{
		printf("输入错误！\n");
	}
	goto start;
	return 0;
}
void input()
{
	system("Cls");
    int i=0;
    printf("-----------------------------------\n");
    printf("|请这样输入学生成绩：              |\n");
    printf("|张三 96                           |\n|李四 98                           |\n");
    printf("|以ctrl+Z结束录入                  |\n");
    printf("-----------------------------------\n");
	while(scanf("%s",&name[i][0])!=EOF)
	{
		scanf("%d",&score[i]);
		i++;
	}
}

void output()
{
	system("Cls");
	int i=0;
	printf("-----------------\n");
	printf("|姓名\t|成绩\t|\n");
	printf("-----------------\n");
	while(score[i])
	{
		printf("|%s\t|%d\t|\n",name[i],score[i]);
		printf("-----------------\n");
		i++;
	}
	printf("请按任意键返回......\n");
	getchar();
	getchar();
}

void sort()
{
	int len=0;
	while(score[len])
	{
		len++;
	}
    int i, j;
    int v;
    for(i = 0; i < len - 1; i ++)
    {
        for(j = i+1; j < len; j ++)
        {
            if(score[i] < score[j])//如前面的比后面的小，则交换。
            {
                v = score[i];
                score[i] = score[j];
                score[j] = v;
                char temp[10];
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
	}
	output();
}

void sort2()
{
	int len=0;
	while(score[len])
	{
		len++;
	}
    int i, j;
    int v;
    for(i = 0; i < len - 1; i ++)
    {
        for(j = i+1; j < len; j ++)
        {
            if(score_temp[i] < score_temp[j])//如前面的比后面的小，则交换。
            {
                v = score_temp[i];
                score_temp[i] = score_temp[j];
                score_temp[j] = v;
                char temp[10];
                strcpy(temp,name_temp[i]);
                strcpy(name_temp[i],name_temp[j]);
                strcpy(name_temp[j],temp);
            }
        }
	}
}

void search()
{
	system("Cls");
	printf("-----------------------\n");
	printf("|   输入要查找的成绩   |\n");
	printf("-----------------------\n");
	int target = 0;
	scanf("%d",&target);
	int len=0;
	while(score[len])
	{
		score_temp[len] = score[len];
		strcpy(name_temp[len],name[len]);
		len++;
	}
	int left = 0;
    int right = len - 1;
    int flag=1;
    sort2();
    while(flag)
    {
    	while(left <= right) 
		{ 
	        int mid = left+(right-left)/2;  //防止溢出
	        if(score_temp[mid] == target)
	        {
	        	printf("-----------------\n");
	            printf("|%s\t|%d\t|\n",name[mid],score[mid]);
				printf("-----------------\n");
				score_temp[mid] = -2;  //不会真有人考-2分吧
			}
	        else if (score_temp[mid] < target)
	        	right = mid - 1;
	        else if (score_temp[mid] > target)
	            left = mid + 1;
    	}
    	flag = 0;
    	printf("查找结束......\n");
	}
	printf("请按任意键返回......\n");
	getchar();
	getchar();
}
