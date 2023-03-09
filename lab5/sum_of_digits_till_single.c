#include <stdio.h>
int main()
{
    int num,org_num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    org_num=num;
    // while(sum%10!=0)
    // {   
    //     sum=0;
        while (num!=0|| sum>9)
        {
            if (num==0 )
            {
                num=sum;
                sum=0;
            }
            
            sum+=num%10;
            num=num/10;
            
        }
    //     num=sum;
    // }
    printf("Sum of the digits of %d = %d",org_num,sum);
    
    return 0;
}