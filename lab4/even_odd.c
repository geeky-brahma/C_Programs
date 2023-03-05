#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    
    switch (a%2)
    {
    case 0:
        printf("Even");
        break;
    case 1:
        printf("Odd");
        break;
    default:
        break;
    }
    return 0;
}