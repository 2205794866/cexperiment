#include <stdio.h>

// #define CHANGE 1
  #define CHANGE 0

int main()
{
	char s[100];
	int i = 0;
	scanf("%s", s);
	#if CHANGE
		while(s[i] != '\0')
		{
			if(s[i] >= 'a' && s[i] <= 'z')
				 s[i] += 'A' - 'a';
			else s[i] += 'a' - 'A';
			i++;
		}
	#endif
	printf("%s", s);
	return 0;		
}
