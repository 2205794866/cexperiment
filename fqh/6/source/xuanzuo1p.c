#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[50];
    char *p;
    int *t1,*t2,*t3,*t4;
    int len[4] = {0,0,0,0};
    int c1[30],c2[20];
    int d1[30],d2[20];
    t1= c1;
    t2 = c2;
    t3 = d1;
    t4 = d2;
    //读入计算式：
    gets(a);
    p = a;
    while(*p != '.')
    {
        if(*p >= '0' && *p <= '9')
        {
            *t1++ = (*p++) - '0';
            len[0] ++;
        }
        else p++;
    }
    p++;
    while (*p != '+')
    {
        if(*p >= '0' && *p <= '9')
        {
            *t2++ = (*p++) - '0';
            len[1] ++;
        }
        else p++;
    }
    p++;
    while(*p != '.')
    {
        if(*p >= '0' && *p <= '9')
        {
            *t3++ = (*p++) - '0';
            len[2] ++;
        }
        else p++;
    }
    p++;
    while(*p != '\0')
    {
        if(*p >= '0' && *p <= '9')
        {
            *t4++ = (*p++) - '0';
            len[3] ++;
        }
        else p++;
    }
    //初始化
    int n,i;
    for(i = 0;i <50; i++)
    b[i] = '0';
    b[30] = '.';
    //小数部分相加，但第31位暂时不加
    if(len[1] >= len[3])
    {
        for(i = len[1] - 1; i>len[3]-1; i--)
        b[31+i] = c2[i] + '0';
        for(i = len[3] - 1; i>0; i--)
        {
            n = c2[i] + d2[i] + b[31+i] - '0';
            b[31+i] = n%10 + '0';
            b[30+i] += n/10;
        }
    }
    else 
    {   
        for(i = len[3] - 1; i>len[1] - 1; i--)
        b[31+i] = d2[i] +'0';
        for(i = len[1] - 1; i>0; i--)
        {
            n = c2[i] + d2[i] + b[31+i] - '0';
            b[31+i] = n%10 + '0';
            b[30+i] += n/10;
        }
    }
    //第31位相加（小数第一位）进位给个位；
    n = c2[0] + d2[0] +b[31] - '0';
    b[31] = n%10 + '0';
    b[29]+= n/10;
    // 整数部分相加
    if(len[0] >= len[2])
    {
        for(i = 0; i<len[2];i++)
        {
            n = c1[len[0]-i-1] +d1[len[2] - i -1] +b[29-i] - '0';
            b[29-i] = n%10+'0';
            b[29-i-1] += n/10;
        }
        for(i = 0; i<len[0] - len[2]; i++)
        {
            n = c1[len[0]-len[2]-i-1]+b[30-len[2]-i] - '0';
            b[30 - len[2] - i] = n%10+'0';
            b[29 - len[2] - i] += n/10;
        }
    }
    else
    {
        for(i = 0; i<len[0];i++)
        {
            n = c1[len[0]-i-1] +d1[len[2] - i -1] +b[29-i] - '0';
            b[29-i] = n%10+'0';
            b[29-i-1] += n/10;
        }
        for(i = 0; i<len[2] - len[0]; i++)
        {
            n = d1[len[2]-len[0]-i-1]+b[30-len[0]-i] - '0';
            b[30 - len[2] - i] = n%10+'0';
            b[29 - len[2] - i] += n/10;
        }
    }
    //构造字符串并输出
    int len1;
    len1 = (len[1] >= len[3]) ? len[1] :len[3];
    char *s;
    s = &b[len1 + 31];
    while(*s == '0')
    s--;
    *(s+1) = '\0';
    char *t = b;
    while(*t++ == '0');
    printf("%s", t);


    return 0;
}