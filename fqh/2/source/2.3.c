#include<stdio.h>

int isheshu(int );
int main()
{
	int heshu3,flag = 0;
	int heshu;
	for(heshu3 = 100;heshu3<=999;heshu3++)
	{
		heshu = heshu3;
		if(isheshu(heshu) && isheshu(heshu/10) && isheshu(heshu/10))
		{	
				printf("%dÊÇ´¿´âºÏÊý\n", heshu3);
		}
	}
	}
	return 0;
}



int isheshu(int x )
{
	int i,k,flag;
	i = 2, k = x>>1, flag = 0;
	if(!(x ==0 || x==1|| x==2))
	{
	do{
		if (!(x%i)) 
		{
			flag = 1;
			i = k;
		}
	i ++;
	}while(i <= k);
	}
	else flag = 0;		
	return flag;
}
