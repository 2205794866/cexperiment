#include <stdio.h>
void strnins(char s[], char t[], int n);

int main()
{
	char s[100], t[100];
	int n;
	scanf("%s%s%d", &s, &t, &n);
	strnins(s,t,n);
	printf("%s", s);
	return 0;
}

void strnins(char s[], char t[], int n)
{
	char a[100];
	int l=0;
	int i;
	i = 0;
	while(t[i])
	{
		a[l++] = s[n];
		s[n] = t[i];
		n++, i++;
	}
	for(i = 0;i <l; i++)
	s[n++] = a[i];
	s[n] = '\0';
}

