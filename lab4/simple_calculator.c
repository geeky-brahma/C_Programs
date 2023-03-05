#include <stdio.h>
int main()
{   
    int ch,a,b;
    printf("1. Addition\n2. Subtration\n3. Multiplication\n4. Division\nEnter Ur Choice: ");
    scanf("%d",&ch);
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    switch (ch)
    {
    case 1:
        printf("%d + %d = %d", a,b, a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
    default:
        printf("Wrong Operator Entered");
        break;
    }
    return 0;
}