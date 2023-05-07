#include <stdio.h>

void great(int *, int *);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    great(&a,&b);

    return 0;
}

void great(int *x, int *y)
{
    if (*x>*y)
    {
        printf("a %d is greater",*x);
    }
    else
    {
        printf("b is greater");
    }
}