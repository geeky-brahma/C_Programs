#include <stdio.h>
int main()
{   
    int a,b;
    char ch;
    printf("Enter A Operator: ");
    scanf("%c",&ch);
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    switch (ch)
    {
    case '+':
        printf("%d + %d = %d", a,b, a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
    case '%':
        printf("%d %% %d = %d",a,b,a%b);
        break;
    default:
        printf("Wrong Operator Entered");
        break;
    }
    return 0;
}