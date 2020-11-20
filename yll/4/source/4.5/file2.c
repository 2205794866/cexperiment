#include "file.h"
int x,y;
char ch;  //把共享的变量声明一遍
void func1(void)
{
        x++;
        y++;
        ch++;
        printf("in file2 x=%d,y=%d,ch is %c\n",x,y,ch);
}