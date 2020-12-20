#include <stdio.h>
int n,m;
void circle(int [][n], int [][m]);
int main()
{
    int i,j;
    scanf("%d%d", &n, &m);
    int a[n][m],b[m][n];
    for(i = 0; i<n; i++)
    for(j = 0; j<m; j++)
    scanf("%d", &a[i][j]);
    circle(b, a);
    for(j = 0; j<m; j++)
    {
        for(i = 0; i<n; i++)
        {
            printf("%d", b[j][i]);
            if(i <n-1)
            printf(" ");
        }
        if(j <m-1)
        printf("\n");
    }
    return 0;

}

void circle(int b[m][n], int a[n][m])
{   
    int i,j;
    for(j = 0; j<m; j++)
    for(i = 0; i<n; i++)
    b[j][i] = a[i][m-j-1];
}