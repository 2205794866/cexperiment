#include <stdio.h>
int main()
{
    char file[100][100];
    FILE *fp;
    char old_str = "you";
    char new_str = "they";
    fp = fopen("test.txt", "r");
    int i;
    for (i = 0; !feof(fp); i++)
    {
        fgets(file[i], 100, fp);
    }
    return 0;
}