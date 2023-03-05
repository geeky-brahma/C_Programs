#include <stdio.h>
int main()
{
    int first,second,third,fourth,fifth,original,new;
    printf("Enter a 5 digit number: ");
    scanf("%d",&original);
    first=original%10;
    second=(original/10)%10;
    third=(original/100)%10;
    fourth=(original/1000)%10;
    fifth=(original/10000)%10;
    new=(first*10000)+(second*1000)+(third*100)+(fourth*10)+fifth;
    printf("Original Number: %d\n",original);
    printf("Reversed Number: %d",new);
    if (original==new)
    {
        printf("The original number is same as the reversed number.");
    }
    else
    {
        printf("The original number is not equal to the new number.");
    }
    return 0;
}