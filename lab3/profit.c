#include <stdio.h>
int main()
{
    int cp, sp, earn;
    printf("Enter The Cost Price: ");
    scanf("%d",&cp);
    printf("Enter The Selling Price: ");
    scanf("%d",&sp);
    earn=sp-cp;
    if (earn>0)
    {
        printf("The Seller has incurred a profit of %d", earn);
    }
    else 
    {
        printf("The Seller has incurred a loss of %d", -earn);
    }


    return 0;
}