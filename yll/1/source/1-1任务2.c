/*实验1-1程序改错与跟踪调试题源程序*/
#include<stdio.h>
#define PI 3.14159//原:#define PI 3.14159; 末尾的";"也会带进去,要把";"去掉
int main()
{
    int f ;
    short p, k ;
    double c, r, s ;

/* 任务2 */
    printf("input the radius r:");
    scanf("%lf", &r);//原:scanf("%f", &r); r是double型,输出都可以用%f,但是输入必须分开%f和%lf
    s = PI * r * r;
    printf("\nThe acreage is %.2f\n\n",s);//原:printf("\nThe acreage is %.2f\n\n",&s); 输出不用"&"
}