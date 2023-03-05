#include <stdio.h>
int main()
{
    int a,b,c,s,area;
    printf("Enter The Value of first side: ");
    scanf("%d",&a);
    printf("Enter The Value of second side: ");
    scanf("%d",&b);
    printf("Enter The Value of third side: ");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the given triangle= %d",area);
    return 0;
}