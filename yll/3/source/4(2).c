#include <stdio.h>
#include <math.h>
int isPrime(int n);
void quickSort(int *array, int left, int right);
int isPrime(int n)
{
	if(n==2 || n==3) return 1;
	if(n%6!=1 && n%6!=5) return 0;
	for(int i=2;i<=sqrt(n)+1;i+=1)
	{
	    if(n%i==0) return 0;
	}
    return 1;
}
void quickSort(long long *array, int left, int right)
{
	if(left < right)
	{
		long long pivot = array[left];
		int low = left, high = right;
		while(low < high)
		{
			while(array[high] >= pivot && low < high)
				high--;
			array[low] = array[high];
			
			while(array[low] <= pivot && low < high)
				low++;
			array[high] = array[low];
		}
		array[low] = pivot;
		
		quickSort(array, left, low - 1);
		quickSort(array, low + 1, right);
	}
}

int main()
{
    long long mp, n = 0, i,perfect;
    long long  b[100005];
    for (i = 2; i <= 20; i++)
    {
    	mp = pow(2,i) - 1;
	    if (isPrime(mp))
	    {
	        perfect = (mp*(mp+1))>>1;
	        if(perfect<=1e8)
			{
				printf("%lld=",perfect);
				int z=0;
				for(long long i=1;i*i<=perfect;i++)
				{
					if (perfect%i==0)
					{
						b[z++]=i;
						if(i*i!=perfect)
						{
							b[z++]=perfect/i;
						}
					}
				}
				quickSort(b,0,z-1);
				for (long i=0;i<z;i++)
				{
					if (i==z-1)
					{
						printf("\n");
						break;
					}
					if (i==z-2)
					{
						printf("%lld",b[i]);
						continue;
					}
					printf("%lld+",b[i]);
				}
				printf("\n");
		    }
		}
	}
    return 0;
}