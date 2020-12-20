#include <stdio.h>

int main()
{
    struct Xxx
    {
        int aa;
        double bb;
        char cc[12];
    };
    struct Xxx mm,nn,*pp,*qq = &mm;
    pp = mm;
    mm = nn;
    mm->bb = 54.2;
    (*qq).cc="sample";
    return 0;
}   