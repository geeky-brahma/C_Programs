#include <stdio.h>
int main()
{
    int start, stop, flag=0;
    printf("Enter the Start Number: ");
    scanf("%d",&start);
    printf("Enter The Stop Value: ");
    scanf("%d",&stop);
    for(int i=start; i<=stop; i++)
    {
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("%d",i);
            printf("\n");
        }
        flag=0;
        
    }
    return 0;
}