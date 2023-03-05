//input 3 sides of triangle-check if it can be drawn-if yes classify as equilateral, isosceles or scalene
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, s, area;
    printf("Enter The Value of first side: ");
    scanf("%d",&a);
    printf("Enter The Value of second side: ");
    scanf("%d",&b);
    printf("Enter The Value of third side: ");
    scanf("%d",&c);
    // s=(a+b+c)/2;
    // area=sqrt(s*(s-a)*(s-b)*(s-c));
    if (a+b>c & b+c>a & c+a>b)
    {
        printf("The Entered Triangle can be Drawn.");
        if (a==b & b==c)
        {
            printf("Equilateral triangle.");
        }
        else if (a==b | (b==c) | (c==a))
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
        
    }
    else
    {
        printf("The Triangle can not be drawn");
    }

    return 0;
}