#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    float tmp[9];
    float tmp2[9];
    char tmp3[100] = {};
    FILE *fp;
    fp = fopen("float.dat", "wb");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &tmp[i]);
    }
    fwrite(tmp, sizeof(float), 10, fp);
    fclose(fp);
    fp = fopen("float.dat", "rb");
    fread(tmp2, sizeof(float), 10, fp);
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", tmp[i]);
    }
    printf("\n");
    fclose(fp);
    fp = fopen("float.dat", "rb");
    fread(tmp3, sizeof(char), 10 * sizeof(float), fp);
    for (int i = 0; i < 10 * sizeof(float); i++)
    {
        printf("%x", tmp3[i] & 0xff);
        if ((i + 1) % sizeof(float) == 0)
        {
            printf("\n");
        }
    }
    fclose(fp);

    return 0;
}