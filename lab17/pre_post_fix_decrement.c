#include <stdio.h>
int main()
{
    int a=5;
    int *p=&a;

    printf("%d\n",p);
    p--;
    printf("%d\n",p);
    --p;
    printf("%d\n",p);
    return 0;
}