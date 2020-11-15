/*实验4-3跟踪调试题程序利用R计算圆的面积s*/ 
#include<stdio.h>  //要include标准输入输出库
#include <assert.h>  //要include头文件
#define  R
int integer_fraction(float x);  //先声明
int main(void)
{
	float  r, s;
	int s_integer=0;
    printf ("Input a number: ");
    scanf("%f",&r);
    #ifdef  R
       s=3.14159*r*r;
       printf("Area of round is: %f\n",s);
       s_integer=integer_fraction(s);
       assert((s-s_integer)<0.5);
       printf("The integer fraction of area is %d\n", s_integer);
    #endif
    return 0;
}

int integer_fraction(float x)
{
  int i=x+0.5;  //i是整数部分,用+0.5的方法实现四舍五入
  return i;
}