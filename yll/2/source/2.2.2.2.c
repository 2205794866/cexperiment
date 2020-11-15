/* 实验2-1改错题程序：合数判断器*/
#include <stdio.h>
#include<iostream>
using namespace std;
int main( )
{ 
int i, x, k, flag = 0;
printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
while (scanf("%d", &x) !=EOF) 
{
    i=2,k=x>>1;
    do 
    {
    	if (i>k) break;
    	if (!(x%i))
	    {
	   	    flag = 1;
	    }
	    i++;
	}while(i<=k&&flag==0);
	if(flag==1)
    {
    	printf("%d是合数", x);
    }
    else
    {
	printf("%d不是合数", x);
    }
	flag = 0;
}
return 0;
}
