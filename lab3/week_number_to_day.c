#include <stdio.h>
int main()
{
    int week_num;
    printf("Enter the week number: ");
    scanf("%d",&week_num);
    if (week_num==1)
    {
        printf("Sunday");
    }
    else if (week_num==2)
    {
        printf("Monday");
    }
    else if (week_num==3)
    {
        printf("Tuesday");
    }
    else if (week_num==4)
    {
        printf("Wednesday");
    }
    else if (week_num==5)
    {
        printf("Thursday");
    }
    else if (week_num==6)
    {
        printf("Friday");
    }
    else if (week_num==7)
    {
        printf("Saturday");
    }
    return 0;
}