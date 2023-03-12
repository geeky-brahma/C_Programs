#include <stdio.h>
int main()
{
    int num,i,sum;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for (i=1;i<num;i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }

    }
    if (sum==num)
    {
        printf("%d is perfect number.",num);
    }
    return 0;
}