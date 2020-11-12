#include<stdio.h>
char str[20] = "\0";
void fushu();
void ten();
void hex();
void eight();
int main()
{
	
    while(gets(str))
    {
    	if (str[0]=='-') fushu();
    	if (str[0]!='0') ten();
    	else if (str[1]=='x' || str[1]=='X') hex();
    	else if (str[0]=='0') eight();
	}
	return 0;
}

void fushu()
{
	int i=0;
	while(str[i]!='\0')
	{
		str[i]=str[i+1];
		i++;
	}
}

void ten()
{
    for(int i=0;i<=20;i++)
    {
    	if(str[i]=='\0'&&i!=0)
    	{
    		printf("yes\n");
    		break;
		}
    	if (!(str[i]>=48&&str[i]<=57))
    	{
    		if(str[i]=='u'&&str[i+1]=='l'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&str[i+1]=='l'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='u'&&str[i+1]=='L'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&str[i+1]=='L'&&i!=0&&str[i+2]=='\0')
			{
			    printf("yes\n");
				break;
			}
			if(str[i]=='u'&&i!=0&&str[i+1]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&i!=0&&str[i+1]=='\0')
			{
				printf("yes\n");
				break;
			}
    		printf("no\n");
    		break;
		}
		else
		{
			continue;
		}
	}
}

void hex()
{
	for(int i=2;i<=20;i++)
    {
    	if(str[i]=='\0'&&i!=0)
    	{
    		printf("yes\n");
    		break;
		}
    	if (!((str[i]>=48&&str[i]<=57)||(str[i]>=65&&str[i]<=70)||(str[i]>=97&&str[i]<=102)))
    	{
    		if(str[i]=='u'&&str[i+1]=='l'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&str[i+1]=='l'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='u'&&str[i+1]=='L'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&str[i+1]=='L'&&i!=0&&str[i+2]=='\0')
			{
			    printf("yes\n");
				break;
			}
			if(str[i]=='u'&&i!=0&&str[i+1]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&i!=0&&str[i+1]=='\0')
			{
				printf("yes\n");
				break;
			}
    		printf("no\n");
    		break;
		}
		else
		{
			continue;
		}
	}
}

void eight()
{
	for(int i=1;i<=20;i++)
    {
    	if(str[i]=='\0'&&i!=0)
    	{
    		printf("yes\n");
    		break;
		}
    	if (!(str[i]>=48&&str[i]<=55))
    	{
    		if(str[i]=='u'&&str[i+1]=='l'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&str[i+1]=='l'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='u'&&str[i+1]=='L'&&i!=0&&str[i+2]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&str[i+1]=='L'&&i!=0&&str[i+2]=='\0')
			{
			    printf("yes\n");
				break;
			}
			if(str[i]=='u'&&i!=0&&str[i+1]=='\0')
			{
				printf("yes\n");
				break;
			}
			if(str[i]=='U'&&i!=0&&str[i+1]=='\0')
			{
				printf("yes\n");
				break;
			}
    		printf("no\n");
    		break;
		}
		else
		{
			continue;
		}
	}
}
