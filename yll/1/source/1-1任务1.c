/*实验1-1程序改错与跟踪调试题源程序*/
#include<stdio.h>
#define PI 3.14159;
int main()
{
    int f ;
    short p, k ;
    double c, r, s ;

/* 任务1 */
    printf("Input Fahrenheit: " ) ;
    scanf("%d", &f ) ; //原:scanf("%d", &f ) 此处scanf没有指向&f而是写成了f
    c = 5.0/9.0 * (f-32) ;//原:c = 5/9 * (f-32) 此处5/9=0(int型),无论怎么算都是0
    printf( "\n %d (F) = %.2f (C)\n\n ", f, c ) ;
    return 0;
}