#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year: ");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        if (yr%400==0)
        {
            printf("%d is a leap year", yr);
        }
        else if (yr%100==0)
        {
            printf("%d is not a leap yaer",yr);
        }
        
    }
    return 0;
}