#include <stdio.h>
int main()
{
	int salary, tax;
	int a;
	scanf("%d",&salary);
	a=salary/1000;
	if(a==0) tax=0;
	else if(a==1) tax=(salary-1000)*0.05;
	else if(a==2) tax=(salary-2000)*0.1+50;
	else if(a==3) tax=(salary-3000)*0.15+150;
	else if(a==4) tax=(salary-4000)*0.20+300;
	else tax=(salary-5000)*0.25+500;
	printf("%d",tax);
    return 0;
}