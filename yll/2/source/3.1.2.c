#include <stdio.h>
int main()
{
	int salary,tax;
	int a;
	scanf("%d",&salary);
	a=salary/1000;
	switch(a)
		{
			case 0:
				tax=0;
				break;
			case 1:
				tax= (salary-1000)*0.05;
				break;
			case 2:
				tax= (salary-2000)*0.1+50;
				break;
			case 3:
				tax = (salary-3000)*0.15+150;
				break;
			case 4:
				tax = (salary-4000)*0.20+300;
				break;
			default:
				tax = (salary-5000)*0.25+500;		
		}
	printf("%d",tax);
    return 0;
}
