#include <stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);

    a>b?(a>c?printf("%d is Greatest",a):printf("%d is Greatest",c)):(b>c?printf("%d is Greatest",b):printf("%d is Greatest",c));
    return 0;
}