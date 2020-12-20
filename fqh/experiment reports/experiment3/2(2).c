#include <stdio.h>

double sum(double , int);

int main()
 {
 	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is %lf:",sum(x,n));
	return 0;	  
 }

double  sum(double x,int n )
{
	double z = 1.0;
	double last_x = 1.0;
	long long last_i= 1;
	int i;
	for(i = 1; i<=n; i++)
	{
		z = z+last_x*x/(last_i*i);
		last_x *=x;
		last_i *=i;
	}
	return z;
}
