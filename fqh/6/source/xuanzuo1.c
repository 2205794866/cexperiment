#include <stdio.h>
int main()
{
    char a[100],b[50];
    char *p;
    int *t,n,i,len1,len2,*t1,*t2,temp;
    int c1[30]={0}, c2[20]= {0}, d1[30] = {0}, d2[20] = {0};
    int len[4] ={0};
    //读入数字
    gets(a);
    p = a;
    t = c1;
    while(*p != '.')
    {
        if(*p >= '0' &&*p <= '9')
        {
            *t++ = *p++ - '0';
            len[0] ++;            
        }
        else p++;
    }
    t =c2;
    while(*p != '\0')
    {
        if(*p >= '0' &&*p <= '9')
        {
            *t++ = *p++ - '0';
            len[1] ++;            
        }
        else p++;
    }
    gets(a);
    p = a;
    t = d1;
    while(*p != '.')
    {
        if(*p >= '0' &&*p <= '9')
        {
            *t++ = *p++ - '0';
            len[2] ++;            
        }
        else p++;
    }
    t = d2;
    while(*p != '\0')
    {
        if(*p >= '0' &&*p <= '9')
        {
            *t++ = *p++ - '0';
            len[3] ++;            
        }
        else p++;
    }
    //初始化
    for(i = 0; i<50;i++)
    b[i] = '0';
    b[30] = '.';
    //小数部分相加,但第三十一位暂时不加
    len1 = (len[1] >= len[3]) ? len[1] : len[3];
    temp = len1;
    t1 = &c2[len1 - 1], t2 = &d2[len1 - 1], p = &b[30+len1];
    while(len1 > 1)
    {
        n = *t1-- + *t2-- + *p - '0';
        *p-- = n%10 +'0';
        *p += n/10;
        len1--; 
    }
    //第三十一位相加，进位给个位
    n = *t1 + *t2 + *p - '0';
    *p = n %10 +'0';
    *(p-2) += n/10;
    //整数部分相加;
    len2 = (len[0] >= len[2]) ? len[0] : len[2];
    t1 = &c1[len2 - 1], t2 = &d1[len2 - 1], p= &b[29];
    while(len2 > 0)
    {
        n = *t1-- + *t2-- +*p - '0';
        *p-- = n%10 + '0';
        *p += n/10;
        len2--;
    }
    //构造字符串并输出
    p = &b[temp + 30];
    while(*p -- =='0');
    *(p+2) = '\0';
    p = b;
    while(*p++ == '0');
    p--;
    printf("%s", p);
    return 0;
}