#include<stdio.h>
#include<string.h>
int fun1(int a[],char b[][100]);
void fun2(int a[],char b[][100], int);
void fun3(int a[],char b[][100], int);
void fun4(int a[],char b[][100], int);
void fun5(int a[],char b[][100], int);
int main()
{
	int x,n;
	int flag = 0;
	char b[100][100];
	int a[100]= {0};
	while(1)
	{
		printf("???????????\n\
		1???????????????????\n\
		2?????????????????????\n\
		3????????????????????C????¦Ã????\n\
		4?????????????\n\
		5???????????????\n\
		?????????????????????????\n");
		scanf("%d", &x);
		switch(x)
		{
			case 1:n = fun1(a,b);break;
			case 2:fun2(a,b,n);break;
			case 3:fun3(a,b,n);break;
			case 4:fun4(a,b,n);n = 0;break;
			case 5:fun2(a,b,n);fun5(a,b,n);break; 
			default: flag = 1;
			break;
		}
		if(flag) 
		break;
	}
	return 0;
}
int fun1(int a[], char b[][100])
{
	int i, n;
	printf("???????????????\n");
	scanf("%d", &n);
	printf("?????????????????C??????:\n");
	for(i = 0; i< n; i++)
	{
		scanf("%s", b[i]);
		scanf("%d", &a[i]);
	}
	return n;
}

void fun2(int a[],char b[][100],int n)
{	
	int i,j,k,temp;
	char temp1[100];
	for(i = 0; i<n-1;i ++)
	{
		for(j = 0; j<n-i; j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				strcpy(temp1, b[j]);
				strcpy(b[j], b[j+1]);
				strcpy(b[j+1], temp1); 
			}
		}
	}
}
	
void fun3(int a[], char b[][100], int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("%d:%s %d\n",i+1,b[i], a[i]);
	}
}

void fun4(int a[],char b[][100], int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		a[i] = 0;
		strcmp(b[i], "");
	}
	printf("???????All were cleaned!\n");
}
void fun5(int a[],char b[][100], int n)
{
	int j,flag= 0,mid,low,high;
	int down,up;
	int c[100]= {0},i = 0, k;
	printf("??????????:\n");
	scanf("%d", &j);	
	high = 0, low = n-1;
	while(high <= low)
	{
		mid = (low+high)/2;
		if(j>a[mid])
			low = mid-1;
		else if(j <a[mid])
			high = mid+1; 
		else 
			{
				c[i] = mid;
				i ++;
				down = mid+1;
				up = mid-1;
				while(a[down] == j)
				{
					c[i] = down;
					down ++,i++;
				}
				while(a[up] == j)
				{
					c[i] = up;
					up --,i++;
				}
				flag = 1;
			}
		if(flag)
		break;
	}
	if(flag)
	for(k = 0; k<i;k++)
	printf("%s %d\n", b[c[k]], a[c[k]]);
	else printf("not found!\n");	
}


