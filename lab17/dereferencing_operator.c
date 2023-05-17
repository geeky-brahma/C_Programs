#include <stdio.h>
int main()
{
    int a=85;
    float b=4.50;
    char c='a';

    int *p1=&a;
    float *p2=&b;
    char *p3=&c;
    
    printf("Value of p1: %d\n",p1);
    printf("Value of p2: %d\n",p2);
    printf("Value of p3: %d\n",p3);

    printf("Address of p1: %d\n",&p1);
    printf("Address of p2: %d\n",&p2);
    printf("Address of p3: %d\n",&p3);

    printf("Value at address stored in p1: %d\n",*p1);
    printf("Value at address stored in p2: %f\n",*p2);
    printf("Value at address stored in p3: %c\n",*p3);
 
    return 0;
}