#include <stdio.h>
int main()
{
    int start,stop,i,j,flag=1;
    printf("Enter the Start number: ");
    scanf("%d",&start);
    printf("Enter the Stop number: ");
    scanf("%d",&stop);
    printf("Divisible by 5:\n");
    for (i=start;i<=stop;i++)
    {
        if(i%5==0)
        {
            printf("%d,",i);
        }
    }
    printf("\nPrime Numbers:\n");
    for (i=start;i<=stop;i++)
    {
        // printf("%d\n",i);
        for (j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag!=0)
        {
            printf("%d,",i);
        }
        
        flag=1;
        
    }
    return 0;
}