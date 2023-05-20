#include <stdio.h>
int main()
{
    int x=10, y=11, z=5, *p1, *p2, *p3;
    p1=&x;
    p2=&y;
    p3=&z;
    if(*p1<*p2)
    {
        printf("OK");
    }
    // printf("OK", p1, p2, p3);
    return 0;
}