#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    
    //Check if 1st number is greater than 2nd number
    if (a>b)
    {
        //Check if 1st greater than 3rd number
        if (a>c)
        {
            printf("%d is greatest of three numbers\n",a);
        }

        //Condition when 1st < 3rd
        else
        {
            printf("%d is greatest of three numbers\n",c);
        }
    }

    //Condition when 1st is less than 2nd
    else
    {
        //Condition when 2nd is greater than 3rd
        if (b>c)
        {
            printf("%d is greatest of three numbers\n",b);
        }

        //Condition when 2nd is less than 3rd
        else
        {
            printf("%d is greatest of three numbers\n",c);
        }
    }
}