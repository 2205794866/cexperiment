#include <stdio.h>
int is(int);
int is8(int);
int is16(int);
char s[100];

int main()
{
	int flag,i,fu;
	while((scanf("%s", &s)) != EOF)
	{
		flag =1;
		fu = 0;
		i = 0;
		if (s [0] == '-')
		{
			i++;
			fu = 1;
		}
		if( s[fu] == '0')
		{
			i++;
			if(s[fu+1] =='x'|| s[fu+1] == 'X')
			{	
				i++;
				flag = is16(i);
			}
			else flag = is8(i);
		}
		else
		flag = is10(i);
		if(flag)
		printf("YES!");
		else printf("NO!");
	}
	return 0;
}
int is10(int i)
{
	int flag = 1;
	while( s[i] !='\0')
	{	
	if(s[i] >='0' && s[i]<= '9')
	i ++;
	else if(s[i] == 'u'|| s[i] == 'U')
		{
			i++;
			if(s[i] == 'l'|| s[i] == 'L')
			{
				i++;
				if(s[i] == '\0')
				break;
				else flag = 0;
			}
			else if(s[i] == '\0')
				break;
			else flag = 0;
		}
	else if(s[i] == 'l'|| s[i] == 'L')
	{
		i++;
		if(s[i] == '\0')
		break;
		else flag = 0;
	}
	else if(s[i] == '\0')
		break;
	else 
	{
	flag = 0;
	break;
	}
	}
	return flag;
}
int is8(int i)
{
	int flag = 1;
	while( s[i] !='\0')
	{	
	if(s[i] >='0' && s[i]<= '7')
	i ++;
		else if(s[i] == 'u'|| s[i] == 'U')
		{
			i++;
			if(s[i] == 'l'|| s[i] == 'L')
			{
				i++;
				if(s[i] == '\0')
				break;
				else flag = 0;
			}
			else if(s[i] == '\0')
			break;
			else flag = 0;
		}
	else if(s[i] == 'l'|| s[i] == 'L')
	{
		i++;
		if(s[i] == '\0')
		break;
		else flag = 0;
	}
	else if(s[i] == '\0')
	break;
	else 
	{
	flag = 0;
	break;
	}
	}
	return flag;
}
int is16(int i)
{
	int flag = 1;
	while( s[i] !='\0')
	{	
	if((s[i] >='0' && s[i]<= '9') ||(s[i] >='A' && s[i]<='F') ||(s[i]>='a' && s[i]<='f'))
	i ++;
	else if(s[i] == 'u'|| s[i] == 'U')
		{
			i++;
			if(s[i] == 'l'|| s[i] == 'L')
			{
			i++;
			if(s[i] == '\0')
			break;
			else flag =0;
			}
			else if(s[i] == '\0')
			break;
			else flag = 0;
		}
	else if(s[i] == 'l'|| s[i] == 'L')
	{
		i++;
		if(s[i] == '\0')
		break;
		else flag =0;
	}
	else if(s[i] == '\0')
	break;
	else 
	{
	flag = 0;
	break;
	}
	}
	return flag;
}
