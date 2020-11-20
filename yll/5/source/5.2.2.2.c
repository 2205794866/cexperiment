#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
    int a[M], b[M];  /* 数组a存放圈中人的编号，数组b存放出圈人的编号 */
	int i, j, k;
	for(i = 0; i < M; i++)  /* 对圈中人按顺序编号1―M */
	{
		a[i] = i + 1;
	}
	for(i=M, j=0; i>0; i--)
	{
		for(k=0;;)
		{
			k=a[j]?k+1:k;  //a[j]=0则k不增加，相当于没报数
			if(k==N)
				break;
			if(++j > M-1)
				j = 0;
		}
		b[M-i] = a[j];
		a[j]=0;
	}
    for(i = 0;i<M-1;i++)
    {
    	printf("%6d",b[i]);
    }
    printf("%6d\n", b[i]);
	return 0;
}
