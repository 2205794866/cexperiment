#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define M (N*4)

int main()
{
    FILE *fp;
    float a[N],b[N];
    char c[M], *p;
    int i,t;
    for(i = 0; i<N; i++)
        scanf("%f", &a[i]);
    if(!(fp = fopen("float.dat", "wb")))
    {
        printf("Can't open float.dat file !\n");
        return 0;
    }
    fwrite(a, sizeof(float), N, fp);
    freopen("float.dat", "rb", fp);
    fread(b,sizeof(float), N, fp);
    rewind(fp);
    fread(c, sizeof(char), M, fp);
    for(i = 0; i<N; i++)
    printf("%f\n", b[i]);
    printf("字节比较:");
    for(i = 0; i<N; i++)
    {
        t = 4*i;
        p = (char*) &a[i];
        printf("第%d个小数的字节比较：\n", i);
        printf("第1个字节:\n");
        printf("源文件中:%x\t", *p++ & 0xff);
        printf("二进制文件中:%x\n", c[t++] & 0xff);
        printf("第2个字节:\n");
        printf("源文件中:%x\t", *p++ &0xff);
        printf("二进制文件中:%x\n", c[t++] &0xff);
        printf("第3个字节:\n");
        printf("源文件中:%x\t", *p++ &0xff);
        printf("二进制文件中:%x\n", c[t++] &0xff);
        printf("第4个字节:\n");
        printf("源文件中:%x\t", *p++ & 0xff);
        printf("二进制文件中:%x\n", c[t++] &0xff);

    }
    fclose(fp);
    return 0;

}