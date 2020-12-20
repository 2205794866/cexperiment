#include<stdio.h> 
#define MAX(a,b,c) max = c; 				\
					if(a>b)					\
						{					\
							{				\
							if(a>c)	max = a; \
							} 				\
						}					\
					else if(b>c)			\
						max = b				



float sum(float x, float y);	

int main(void)
{
	int a, b, c,max;
  	float d, e;
  	printf("Input three integers:");
  	scanf("%d %d %d",&a,&b,&c);
  	MAX(a,b,c);
  	printf("\nThe maximum of them is %d\n",max);

  	printf("Input two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nThe sum of them is  %f\n",sum(d,e));
	return 0;
}
	

float sum(float x, float y)
{
	return x+y;
}
