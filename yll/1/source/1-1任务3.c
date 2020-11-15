/*实验1-1程序改错与跟踪调试题源程序*/
#include<stdio.h>
#define PI 3.14159//原:#define PI 3.14159; 末尾的";"也会带进去,要把";"去掉
int main()
{
    int f ;
    short p, k ;
    double c, r, s ;

/* 任务3 */
    short newint;//之前程序中没有声明这个变量
    k = 0xa1b2, p = 0x8432;
    newint = (p&0xff00)|((k>>8)&0x00ff);//newint=-95,k=-24142
    printf("new int = %hx\n\n",newint);
    return 0;newint = (p&0xff00)|((k>>8)&0x00ff);
}