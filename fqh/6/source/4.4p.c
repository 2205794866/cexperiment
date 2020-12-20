#include<stdio.h>
#include<assert.h>
typedef void def(void);
def f0,f1,f2,f3,f4,f5,f6,f7;
def scheduler;
void execute(void(*p[50])(void), int n);
int main()
{
    scheduler();
    return 0;
}

void scheduler(void)
{
    void (*p[50])(void);
    char s[50];
    char *ps = s;
    int i = 0,flag = 1;
    scanf("%s", s);
    while(*ps != '\0')
    {
        switch (*ps)
        {
        case '0': p[i] = f0;break;
        case '1': p[i] = f1;break;
        case '2': p[i] = f2;break;
        case '3': p[i] = f3;break;
        case '4': p[i] = f4;break;
        case '5': p[i] = f5;break;
        case '6': p[i] = f6;break;
        case '7': p[i] = f7;break;
        default:printf("Error!");
        flag = 0;
        break;
        }
        assert(flag);
        i++;
        ps++;
    }
    execute(p, i);
}
void execute(void((**p)(void)), int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        (*(p+i))();
    }
}

void f0()
{
    printf("task0 is called!\n");
}

void f1()
{
    printf("task1 is called!\n");
}

void f2()
{
    printf("task2 is called!\n");
}

void f3()
{
    printf("task3 is called!\n");
}

void f4()
{
    printf("task4 is called!\n");
}

void f5()
{
    printf("task5 is called!\n");
}

void f6()
{
    printf("task6 is called!\n");
}

void f7()
{
    printf("task7 is called!\n");
}


