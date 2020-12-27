#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data
{
    char uid[16];
    char name[16];
    int eng;
    int math;
    int phy;
    int c_lang;
    int all;
    double aver;
    struct data *next;
} data;
void creat(data **head_p)
{
    data *tail = NULL;
    *head_p = (data *)malloc(sizeof(data));
    tail = *head_p;
    data *p = NULL;
    printf("please input uid,name|eng,math,phy and c_lang\n");
    while (scanf("%s %s %d %d %d %d", tail->uid, tail->name, &tail->eng, &tail->math, &tail->phy, &tail->c_lang) > 0)
    {
        tail->all = tail->c_lang + tail->eng + tail->math + tail->phy;
        tail->aver = ((double)tail->all) / 4.0;
        tail->next = (data *)malloc(sizeof(data));
        p = tail;
        tail = tail->next;
        printf("please input uid,name|eng,math,phy and c_lang\n");
    }
    free(tail);
    p->next = NULL;
}
void edit(data *head_p)
{
    printf("please input the uid you want to edit\n");
    char tmp[16];
    scanf("%s", tmp);
    data *p = head_p;
    while (1)
    {
        if (strcmp(p->uid, tmp) == 0)
        {
            printf("\
            which data do you want to edit?\n\
            1.name\n\
            2.eng\n\
            3.math\n\
            4.phy\n\
            5.c_lang\n\
            ");
            int cmd;
            scanf("%d", &cmd);
            if (cmd == 1)
            {
                printf("input the new name:");
                scanf("%s", &p->name);
                break;
            }
            if (cmd == 2)
            {
                printf("input the new eng:");
                scanf("%s", &p->eng);
            }
            if (cmd == 3)
            {
                printf("input the new math:");
                scanf("%s", &p->math);
            }
            if (cmd == 4)
            {
                printf("input the new phy:");
                scanf("%s", &p->phy);
            }
            if (cmd == 5)
            {
                printf("input the new c_lang:");
                scanf("%s", &p->c_lang);
            }
            p->all = p->c_lang + p->eng + p->math + p->phy;
            p->aver = ((double)p->all) / 4.0;
            break;
        }
        p = p->next;
        if (p == NULL)
        {
            printf("can't find this student!\n");
            break;
        }
    }
}
void output_all(data *head_p)
{
    data *p = head_p;
    while (1)
    {
        printf("uid:%s,name:%s,eng:%d,math:%d,phy:%d,c_lang:%d\n", p->uid, p->name, p->eng, p->math, p->phy, p->c_lang);
        p = p->next;
        if (p == NULL)
            break;
    }
}
void output_score(data *head_p)
{
    data *p = head_p;
    while (1)
    {
        printf("uid:%s,name:%s,all:%d,aver:%.2lf\n", p->uid, p->name, p->all, p->aver);
        p = p->next;
        if (p == NULL)
            break;
    }
}
int main()
{
    data *head;
    int cmd;
    printf("\
        choose the function:\n \
        1.creat all\n \
        2.output all\n \
        3.edit data\n \
        4.output everyone's average\n\
        ");
    while (scanf("%d", &cmd) > 0)
    {
        if (cmd == 1)
        {
            creat(&head);
        }
        if (cmd == 2)
        {
            output_all(head);
        }
        if (cmd == 3)
        {
            edit(head);
        }
        if (cmd == 4)
        {
            output_score(head);
        }
        printf("\
        choose the function:\n \
        1.creat all\n \
        2.output all\n \
        3.edit data\n \
        4.output everyone's average\n\
        ");
    }
    return 0;
}