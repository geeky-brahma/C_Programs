#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        printf("%d\n",num%10);
        num=num/10;
    }
    
    return 0;
}