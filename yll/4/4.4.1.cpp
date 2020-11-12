#include<stdio.h>
#include<math.h>
#define get_s(a,b,c) ((a+b+c)/2)
#define get_area(s,x,y,z) (sqrt(s*(s-x)*(s-y)*(s-z)))
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double s=get_s(a,b,c);
	double area=get_area(s,a,b,c);
	printf("%lf %lf",s,area);
	return 0;
}