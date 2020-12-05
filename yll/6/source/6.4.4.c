#include<stdio.h>
void scheduler(void);
void task0(void);
void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void task0(void)
{
	printf("task0 is called\n");
}
void task1(void)
{
	printf("task1 is called\n");
}
void task2(void)
{
	printf("task2 is called\n");
}
void task3(void)
{
	printf("task3 is called\n");
}
void task4(void)
{
	printf("task4 is called\n");
}
void task5(void)
{
	printf("task5 is called\n");
}
void task6(void)
{
	printf("task6 is called\n");
}
void task7(void)
{
	printf("task7 is called\n");
}
void execute(void (*p2[8])(), int i)
{
	for(int j=0;j<i;j++)
	{
		p2[j]();
	}
}
void scheduler(void)
{
	void (*p[8])(void);
	p[0]=task0;
	p[1]=task1;
	p[2]=task2;
	p[3]=task3;
	p[4]=task4;
	p[5]=task5;
	p[6]=task6;
	p[7]=task7;
	char cmd[10];
	gets(cmd);
	int i=0;
	void (*p2[8])(void);
	while(cmd[i])
	{
		p2[i]=p[cmd[i]-'0'];
		i++;
	}
	execute(p2,i);
}
int main()
{
	scheduler();
	return 0;
}