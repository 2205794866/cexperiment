#include <stdio.h>
#include <stdlib.h>
struct s_list
{ 
    int data; 						/* 数据域 */
    struct s_list *next; 			/* 指针域 */ 
};
void create_list (struct s_list **headp,int *p);//?更改函数声明
void main(void)
{
	struct s_list *head=NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0}; 	/* 0为结束标记 */
	create_list(&head,s); 			/* 创建新链表 */  //?将head的地址传入函数
	p=head; 						/*遍历指针p指向链头 */
	while(p){
		printf("%d\t",p->data); 	/* 输出数据域的值 */
		p=p->next;					/*遍历指针p指向下一结点 */
	}
	printf("\n");
}
void create_list(struct s_list **headp,int *p)//?更改函数原型，接收head的地址
{
    int i = 0;
    struct s_list *loc_head, *after = NULL;
    while(*p != 0)
    {
        loc_head = (struct s_list*)malloc(sizeof(struct s_list));
        loc_head->data = *p++;
        loc_head->next = after;
        after = loc_head;
    }
    *headp = loc_head;
}
