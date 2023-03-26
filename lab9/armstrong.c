#include <stdio.h>
int main()
{
    int num,temp,digit,sum=0;
    printf("Enter The Number: ");
    scanf("%d", &num);
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        temp/=10;
        sum+=(digit*digit*digit);

    }
    if(sum==num)
    {
        printf("%d is an Armstrong Number\n",num);

    }
    else
    {
        printf("%d is not an Armstrong Number\n",num);
    }
    return 0;
}