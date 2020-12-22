#include<stdio.h>
#define PI 3.14159//define定义后不能加; 
int main( void )
{
   int f, newint ;
   short p, k ;
   double c, r, s ;

/* 任务1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%d", &f) ;//scanf 需要取地址符& 
   c = 5.0/9 * (f-32) ;//5/9应为5.0/9的浮点数运算 
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;

/* 任务2 */
printf("input the radius r:");
scanf("%lf", &r);//scanf浮点数应用lf 
s = PI * r * r;
printf("\nThe acreage is %.2f\n\n",s);//printf不用取地址 

/* 任务3 */
k = 0xa1b2, p = 0x8432;
newint = p&0xff00|k>>8&0x00ff;// 为使k的高字节变成0 
printf("newint = %x\n\n",newint);//newint未定义 ,输出整数 
return 0;
}
