#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    switch (a>b)
    {
    case 1:
        printf("%d > %d", a,b);
        break;
    case 0:
        printf("%d < %d",a,b);
        break;
    default:
        break;
    }
    return 0;
}