#include <stdio.h>
int main()
{
    int num,org_num,rev=0;
    printf("Enter the Number: ");
    scanf("%d",&num);
    org_num=num;
    while (num!=0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    printf("The reverse of %d = %d",org_num,rev);
    return 0;
}