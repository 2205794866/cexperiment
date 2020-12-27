#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace(char *,char *,char *,char *)
int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Arguments error!\n");
        return 0;
    }
    FILE *fp;
    if((fp = fopen(argv[1], "r+")) == NULL)
    {
        printf("Can't open %s file!\n", argv[1]);
        return 0;
    }
    char buff[255], temp[255] = "",*p;
    int len1,len2,len = strlen(argv[2]);
    while(fgets(buff,255,fp))
    {
        len1 = strlen(buff);
        p = buff;
        

    }
}


int replace(char *p, char *t, char *s1, char *s2)
{
    int flag = 0;
    char *p0 = p;
    while(*t++);
    t--;
    while(*p++ == *s1++);
    s1--;
    if(*s1 == '\0')
    {
        flag = 1;
        while(*t++ = *s2++);
    }
    else 
    {
        *t++ *p0; 
        *t = '\0';
    }
    return flag;
}