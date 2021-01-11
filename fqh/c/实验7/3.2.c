#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
// struct构建
typedef struct _Node
{
    char ID[30];
    char name[30];
    int Score[4];
    int total;
    double average;
    struct _Node* next;
} Node;

typedef struct _List
{
    Node *head;
    Node *tail;
} List;
//函数声明
void input_info(List *list);
void output_info(List *list);
void change(List *list);
void average(List *list);
void output_more(List *list);

int main()
{

    int  n, flag = 1;
    void (*p)(List *);
    List list;
    list.head = NULL;
    list.tail = NULL;
    while(1)
    {    
        //系统界面
        printf("*********************************\n");
        printf("*****      班级成绩系统      *****\n");
        printf("1:输入每个学生的各项信息\n");
        printf("2:输出每个学生的各项信息\n");
        printf("3:修改指定学生的指定数据项的内容\n");
        printf("4:统计每个同学的平均成绩\n");
        printf("5:输出各位同学的学号、姓名、四门课程的总成绩和平均成绩\n");
        printf("输入其他字符退出本系统\n");
        printf("请输入功能代码:\n");
        scanf("%d", &n);
        switch (n)
        {
            case 1 :p =input_info;break;
            case 2 :p =output_info; break;
            case 3 :p = change; break;
            case 4 :p = average; break;
            case 5 :p = output_more; break;
            default :printf("正常退出\n"); flag = 0;
            break;           
        }
        if(!flag)
        break;
        p(&list);
    }
    return 0;
}

void input_info(List *list)
{
    int i=0,flag;
    Node *p;
    while(1)
    {
        printf("输入功能代码：\n");
        printf("1：继续录入学生信息\n");
        printf("0：结束信息录入\n");
        scanf("%d", &flag);
        if(!flag)
        break;
        i++;
        p = (Node *)malloc(sizeof(Node));
        printf("请输入第%d个学生学号:\n", i);
        scanf("%s", p->ID);
        printf("请输入学生姓名：\n");
        scanf("%s", p->name);
        printf("请输入学生英语成绩：\n");
        scanf("%d", &p->Score[0]);
        printf("请输入学生高等数学成绩：\n");
        scanf("%d", &p->Score[1]);
        printf("请输入学生普通物理成绩：\n");
        scanf("%d", &p->Score[2]);
        printf("请输入学生C语言程序设计成绩：\n");
        scanf("%d", &p->Score[3]);
        if(!(list->head))
        {
            list->head = p;
            list->tail = p;
        }
        else
        {
            list->tail->next = p;
            list->tail = p;
        }
    }
    if(i>0)
        list->tail->next = NULL;
}
void output_info(List *list)
{
    int i;
    Node *p;
    for(p = list->head, i = 1; p; p = p->next,i++)
    {
        printf("第%d个学生学号:%s\n", i,p->ID);
        printf("姓名:%s\n", p->name);
        printf("英语成绩:         %d\n", p->Score[0]);
        printf("高等数学成绩:     %d\n", p->Score[1]);
        printf("普通物理成绩:     %d\n", p->Score[2]);
        printf("C语言程序设计成绩:%d\n", p->Score[3]);
    }
}
void change(List *list)
{   
    char s[30], t[30];
    int n,temp, flag;
    printf("请输入要修改的学生的学号\n");
    scanf("%s", s);
    Node *p = list->head;
    while(p && strcmp(s,p->ID))
    p = p->next;
    if(p)
    {
        while(1)
        {
            printf("请输入要修改的项目:\n");
            printf("1:学号\n");
            printf("2:姓名\n");
            printf("3:英语成绩\n");
            printf("4:高等数学成绩\n");
            printf("5:普通物理成绩\n");
            printf("6:C语言程序设计成绩\n");
            printf("输入其他字符退出\n");
            scanf("%d", &n);
            printf("请输入要修改的内容:\n");
            switch (n)
            {
            case 1: scanf("%s", t);
                    strcpy(p->ID, t);break;
            case 2: scanf("%s", t);
                    strcpy(p->name, t);break;
            case 3: scanf("%d", &temp);
                    p->Score[0] = temp;break;
            case 4: scanf("%d", &temp);
                    p->Score[1] = temp;break;
            case 5: scanf("%d", &temp);
                    p->Score[2] = temp; break;
            case 6: scanf("%d", &temp);
                    p->Score[3] = temp;break;
            default: flag = 0;
                    break;
            }
            if(!flag)
                break;
        }
    }
    else printf("输入错误，无此学生\n");
}

void average(List *list)
{
    Node *p;
    int i,n;
    for(p = list->head; p; p = p->next)
    {
        p->total = 0;
        for(i = 0; i<4; i++)
        p->total += p->Score[i];
        p->average = p->total/4.0;
    }

}

void output_more(List *list)
{
    average(list);
    int i;
    Node *p;
    for(p = list->head, i = 1; p; p = p->next,i++)
    {
        printf("第%d个学生学号:%s\n", i,p->ID);
        printf("姓名:%s\n", p->name);
        printf("英语成绩:         %d\n", p->Score[0]);
        printf("高等数学成绩:     %d\n", p->Score[1]);
        printf("普通物理成绩:     %d\n", p->Score[2]);
        printf("C语言程序设计成绩:%d\n", p->Score[3]);
        printf("总成绩为:         %d\n", p->total);
        printf("平均成绩为:       %.2f\n", p->average);
    }
}
