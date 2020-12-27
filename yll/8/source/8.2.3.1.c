#include <stdio.h>
#include <string.h>
#define maxline 100
#define maxchar 100
#define maxword 10
int main(int argc, char *argv[])
{
    char file[maxline][maxchar];
    char tmp[maxline][maxchar];
    FILE *fp;
    int count = 0;
    char old_str[maxword];
    strcpy(old_str, argv[2]);
    char new_str[maxword];
    strcpy(new_str, argv[3]);
    int old_len = strlen(old_str);
    int new_len = strlen(new_str);
    fp = fopen(argv[1], "r");
    int i;
    for (i = 0; !feof(fp); i++)
    {
        fgets(file[i], 100, fp);
    }
    char *p, *sub_p, *tmp_p;
    for (int j = 0; j <= i; j++)
    {
        p = &file[j][0];
        tmp_p = &tmp[j][0];
        while (sub_p = strstr(p, old_str))
        {
            while (p < sub_p)
            {
                *tmp_p++ = *p++;
            }
            strcpy(tmp_p, new_str);
            tmp_p += new_len;
            p += old_len;
            count++;
        }
        while (*p)
        {
            *tmp_p++ = *p++;
        }
    }
    fclose(fp);
    fp = fopen(argv[1], "w");
    for (int j = 0; j <= i; j++)
    {
        fprintf(fp, "%s", tmp[j]);
    }
    printf("%d", count);
    return 0;
}