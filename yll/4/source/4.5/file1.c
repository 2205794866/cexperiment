#include "file.h"
int x,y;
char ch;  //把共享的变量声明一遍
int main(void)
{
        x=10;
        y=20;
        ch=getchar();
        printf("in file1 x=%d,y=%d,ch is %c\n",x,y,ch);
        func1();
 return 0;
}