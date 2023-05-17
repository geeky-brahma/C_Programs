#include <stdio.h>
int main()
{
    int a=85;
    float b=4.50;
    char c='a';
    double d=2.90;

    int *p1=&a;
    float *p2=&b;
    char *p3=&c;
    double *p4=&d;

    printf("sizeof(p1) = %u\n",sizeof(p1));
    printf("sizeof(*p1) = %u\n",sizeof(*p1));

    printf("sizeof(p2) = %u\n",sizeof(p2));
    printf("sizeof(*p2) = %u\n",sizeof(*p2));

    printf("sizeof(p3) = %u\n",sizeof(p3));
    printf("sizeof(*p3) = %u\n",sizeof(*p3));

    printf("sizeof(p4) = %u\n",sizeof(p4));
    printf("sizeof(*p4) = %u\n",sizeof(*p4));

    return 0;
}