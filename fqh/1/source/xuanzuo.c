#include<stdio.h>

int main()
{	
	
	char word[100]={'\0'};
	scanf("%s", word);
	int t= 0; 
	while(word[t] != '\0')
	{
	int i;
	char a;
	a = word[t];
	int b[8],d[8];
	for(i = 0;i <8;i++){
		b[i] = a & 1;
		a >>=1;
	}
	for( i=0; i<6; i+=2){
	int z;
	z = b[i];
	b[i] = b[i+1];
	b[i+1] = z; 
	//	printf("b[%d] %d\n", i,b[i]);
	//	printf("b[%d] %d\n", i+1, b[i+1]); 
	}
	int c = 0;
	c = b[6]+b[7]*2;
	//printf("c=%d", c); 
	for(i = 0; i<8;i++)
	d[i] = b[i];	
	for(i =5; i>c-1; i--)
	b[i]=d[i-c];
	//printf("b[%d]=%d\n",i,b[i]);
	for(i = 0; i<c; i++)
	b[i]=d[5-c+1+i];
	//	for(i = 0;i<8;i++)
	//	printf("b[%d]=%d\n",i, b[i]);
	for(i = 0; i<8;i++)
	a+=b[i]<<i;
	printf("%c", a);
	t ++;
    }
	return 0;
}

