#include <stdio.h>

void swap(int*x ,int *y );
int main()
{
	int x,y;
	scanf("%d %d", &x, &y);
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
} 

void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
