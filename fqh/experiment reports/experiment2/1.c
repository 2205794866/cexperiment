#include <stdio.h>
int main( )
{ 
	int i, x, k, flag = 0;
	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while (scanf("%d", &x) !=EOF) {
	for(i=2,k=x>>1;i<=k;i++)
		if (!(x%i))				//少了括号 
		{
			flag = 1;
			break;
		}
	if(flag == 1) printf("%d是合数", x);//判断是否相等应用== 
	else printf("%d不是合数", x);
	flag = 0;			//flag应复位为0 
	}
	return 0;
}

