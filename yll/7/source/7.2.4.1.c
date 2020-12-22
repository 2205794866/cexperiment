#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct scores
{
    char card_num[20];
    char name[20];
    int math;
    int english;
    int physics;
    int c_lan;
    struct scores *next;
};

void newstudent(struct scores **head);
void print_info(struct scores *head);
void print_average(struct scores *head);
void change_info(struct scores *head);
struct scores *find_student(struct scores *head, char *target);
void print_all(struct scores *head);
void sortdata(struct scores *head); //添加排序函数

int main(void)
{
    int choice;
    int flag;
    struct scores *head = NULL, **tail = &head;
    do
    {
        flag = 0;
        printf("Please choose:\n");
        printf("1. add student\n");
        printf("2. print information\n");
        printf("3. print average scores\n");
        printf("4. change information\n");
        printf("5. print information and average scores\n");
        printf("6. sort data\n");
        printf("7. quit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            newstudent(tail);
            flag = 1;
            break;
        case 2:
            print_info(head);
            break;
        case 3:
            print_average(head);
            break;
        case 4:
            change_info(head);
            break;
        case 5:
            print_all(head);
            break;
        case 6:
            sortdata(head);
            break;
        default:
            return 0;
        }
        if (head == NULL)
            head = *tail;
        if (flag)
            tail = &(*tail)->next;
    } while (choice != 7);
    return 0;
}
void newstudent(struct scores **head)
{
    struct scores *p = (struct scores *)malloc(sizeof(struct scores));
    printf("Please enter the card number of student:\n");
    scanf("%s", p->card_num);
    printf("Please enter the student's name:\n");
    scanf("%s", p->name);
    printf("Please enter the score of math:\n");
    scanf("%d", &p->math);
    printf("Please enter the score of English:\n");
    scanf("%d", &p->english);
    printf("Please enter the score of physics:\n");
    scanf("%d", &p->physics);
    printf("Please enter the score of c_language:\n");
    scanf("%d", &p->c_lan);
    p->next = NULL;
    *head = p;
}
void print_info(struct scores *head)
{
    while (head)
    {
        printf("card_num: %s\n", head->card_num);
        printf("name: %s\n", head->name);
        printf("math: %d\n", head->math);
        printf("English: %d\n", head->english);
        printf("Physics: %d\n", head->physics);
        printf("c language: %d\n\n", head->c_lan);
        head = head->next;
    }
}
void print_average(struct scores *head)
{
    int sum;
    while (head)
    {
        sum = 0;
        sum += head->english;
        sum += head->math;
        sum += head->physics;
        sum += head->c_lan;
        printf("The average score of %s is %.2f\n", head->name, sum / 4.0);
        head = head->next;
    }
    printf("\n");
}
void change_info(struct scores *head)
{
    char target[10];
    int choice;
    int data;
    printf("Please enter the name of the wanted student:\n");
    scanf("%s", target);
    struct scores *temp = find_student(head, target);
    if (temp)
    {
        printf("Please choose the subject you want to change:\n");
        printf("1. Math\n");
        printf("2. Physics\n");
        printf("3. English\n");
        printf("4. c language\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Please enter the new score of math:\n");
            scanf("%d", &data);
            temp->math = data;
            break;
        case 2:
            printf("Please enter the new score of physics:\n");
            scanf("%d", &data);
            temp->physics = data;
            break;
        case 3:
            printf("Please enter the new score of English:\n");
            scanf("%d", &data);
            temp->english = data;
            break;
        case 4:
            printf("Please enter the new score of c language:\n");
            scanf("%d", &data);
            temp->c_lan = data;
            break;
        }
    }
    else
        printf("Student not found\n");
}
struct scores *find_student(struct scores *head, char *target)
{
    while (head && strcmp(head->name, target))
        head = head->next;
    return head;
}
void print_all(struct scores *head)
{
    int sum = 0;
    while (head)
    {
        sum = 0;
        sum += head->english;
        sum += head->math;
        sum += head->physics;
        sum += head->c_lan;
        printf("card_num: %s\n", head->card_num);
        printf("name: %s\n", head->name);
        printf("math: %d\n", head->math);
        printf("English: %d\n", head->english);
        printf("Physics: %d\n", head->physics);
        printf("c language: %d\n", head->c_lan);
        printf("sum: %d\n", sum);
        printf("The average score of %s is %.2f\n\n", head->name, sum / 4.0);
        head = head->next;
    }
}
void sortdata(struct scores *head)
{
    int flag = 1;
    struct scores *p = head;
    struct scores *ptr, *q, temp;
    int sum1, sum2;
    while (flag)
    {
        q = p;
        flag = 0;
        while (q->next != NULL)
        {
            sum1 = sum2 = 0;
            sum1 += q->c_lan;
            sum1 += q->english;
            sum1 += q->math;
            sum1 += q->physics;
            sum2 += q->next->c_lan;
            sum2 += q->next->english;
            sum2 += q->next->math;
            sum2 += q->next->physics;
            if (sum1 > sum2)
            {
                flag = 1;
                temp = *q->next;
                ptr = q->next->next;
                *q->next = *q;
                q->next->next = ptr;
                ptr = q->next;
                *q = temp;
                q->next = ptr;
            }
            q = q->next;
        }
    }
}