#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace(char *,char *,char *, char *);


int main(int argc, char *argv[])
{
    //判断参数是否正确
    if(argc != 4)
    {
        printf("Arguments error!\n");
        return 0;
    }
    //定义变量与打开文件
    FILE *fp1,*fp2;
    char buff[255],temp[255], *p;
    int len = strlen(argv[2]),n = 0;  
    if((fp1=fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s file !\n", argv[1]);
        return 0;
    }
    fp2 = fopen("temp.txt", "w");
    //replace操作
    while(fgets(buff, 255, fp1))
    {
        p = buff;
        strcpy(temp,"");
        while(*p != '\0')
        {
            if(replace(p,temp,argv[2], argv[3]))
            {
                p = p+len;
                n++;
            }
            else 
                p++;
        }
        fputs(temp, fp2);
    }
    freopen(argv[1], "w",fp1 );
    freopen("temp.txt", "r",fp2);
    while(fgets(buff, 255, fp2))
    fputs(buff, fp1);
    fclose(fp1);
    fclose(fp2);
    remove("temp.txt");
    printf("total:%d\n", n);
    return 0;
}

int replace(char *p,char*temp, char *t1, char *t2)
{
    int flag = 0;
    char *p0 = p;
    while(*temp++);
    temp--;
    while(*p++ == *t1++);
    t1--;
    if(*t1 == '\0')
    {

        while(*temp++ = *t2++);
        flag = 1;
    }
    else
    {
        *temp++ = *p0;
        *temp = '\0';
    }
    return flag;
}