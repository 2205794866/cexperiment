/*实验4-1改错与跟踪调试题程序：计算平方差、交换两数*/ 
#include<stdio.h>
#define SUM a+b
#define DIF a-b
#define SWAP(a,b)  a=a^b,b=a^b,a=a^b  //不能直接交换,需要第三个变量或者用异或(对同一个数字异或两次相当于没有异或)
int main() 
{
    int a,b;
    printf("Input two integers a, b:");
    scanf("%d%d",&a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, (SUM)*(DIF));  //define是直接交换,这里应该打上括号或者define的时候加上括号
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}