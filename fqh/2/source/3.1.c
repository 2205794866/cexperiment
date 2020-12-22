#include <stdio.h>

int main() 
{
	int x;
	int n =0;
	scanf("%d", &x);
	switch(x/1000)
	{
	case 0: n=0;
	break;
	case 1: n=(x-1000)*0.05;
	break;
	case 2: n=1000*0.05+(x-2000)*0.1;
	break;
	case 3: n=1000*0.05+1000*0.1+(x-3000)*0.15;
	break;
	case 4: n=1000*0.05+1000*0.1+1000*0.15+(x-4000)*0.2;
	break;
	default : n=1000*0.05+1000*0.1+1000*0.15+1000*0.2+(x-5000)*0.25;
	break;
	}
	printf("%d", n);
	return 0;
}

