#include <stdio.h>
int main()
{
    int num,org_num,product=1;
    printf("Enter the Number: ");
    scanf("%d",&num);
    org_num=num;
    while (num!=0)
    {
        product*=num%10;
        num=num/10;
    }
    
    printf("The Multiplication of the digits of %d = %d", org_num, product);
    return 0;
}