# include<stdio.h>
# include<string.h>
char *mystrcpy (char *, char*);
char *mystrcat (char *, char*);
char *mystrtok (char *, char*);
int main (void)
{
    char *(*p)(char *, char*);
    char *(*s[3])(char *, char *);
    s[0] = mystrcpy,s[1] = mystrcat,s[2] = mystrtok;
    char a[80], b[80], *result;
    int choice;
    while(1)
    {
	    do
	    {
            printf("\t\t1 copy string.\n");
            printf("\t\t2 connect string.\n");
            printf("\t\t3 parse string.\n");
            printf("\t\t4 exit.\n");
            printf("\t\tinput a number (1-4) please.\n");
            scanf("%d", &choice);
        }while(choice<1 || choice>4);
    if(choice != 4)
        p = s[choice-1];
    else
        goto down;
    getchar();
    printf("input the first string please!\n");
    gets(a);
    printf("input the second string please!\n");
    gets(b);
    result = p(a, b);
    printf("the result is %s\n", result);
    }
	down:
	return 0;
}

char *mystrcpy (char *s, char*t)
{
    char *s0;
    s0 = s;
    while(*t != '\0')
    *s++ = *t++;
    *s='\0';
    return s0;
}

char *mystrcat(char *s, char*t)
{
    char *s0 = s;
    while (*s != '\0')
    s++;
    while(*t != '\0')
    *s++ = *t++;
    *s = '\0';
    return s0;
}

char *mystrtok(char *s, char *t)
{
    char *ps = s, *pt, *pc;
    while(*ps != '\0')
    {
        for(pt = t, pc = ps; *pt != '\0'&& *pt== *pc; pt++, pc++);
        if(*pt == '\0')
        {
            *ps = '\0';
            break;
        }
        ps++;
    }
    return s;
}

