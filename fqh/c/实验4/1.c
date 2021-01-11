#include<stdio.h>
#define SUM (a+b)		//宏定义时最好加上括号
#define DIF (a-b)		//宏定义时最好加上括号
#define SWAP(a,b)  temp = a,a=b,b=temp     //将b赋给a时b的值已经不存在了，不能达到交换的目的 
										   //通过temp中间变量实现a,b值的交换 
int main() 
{
    int a,b,temp;		//定义一个temp暂时存储a的值 
    printf("Input two integers a, b:");
    scanf("%d%d", &a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, SUM*DIF);
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}

