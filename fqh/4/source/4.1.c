#include <stdio.h>
#include <math.h>
#define s(a,b,c) s =(a+b+c)/2
#define area(a,b,c)		area = sqrt(s*(s-a) *(s-b)*(s-c))

int main()
{
	int a,b,c;
	double s= 0.0;
	double area = 0.0;
	scanf("%d%d%d", &a, &b, &c);
	if(a+b>c && a+c >b && b+c >a)
	{	
		s(a,b,c);
		area(a,b,c);
		printf("%.2f", area);
	}
	else
	printf("it's not a triangle\n");
	return 0;
	
}
