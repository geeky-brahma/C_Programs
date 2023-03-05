#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float slope1, slope2, slope3;
    printf("Enter x-coordinate of 1st point: ");
    scanf("%d",&x1);
    printf("Enter y-coordinate of 1st point: ");
    scanf("%d",&y1);
    printf("Enter x-coordinate of 2nd point: ");
    scanf("%d",&x2);
    printf("Enter y-coordinate of 2nd point: ");
    scanf("%d",&y2);
    printf("Enter x-coordinate of 3rd point: ");
    scanf("%d",&x3);
    printf("Enter y-coordinate of 3rd point: ");
    scanf("%d",&y3);
    slope1=((y2-y1)/(x2-x1));
    slope2=((y3-y2)/(x3-x2));
    slope3=((y1-y3)/(x1-x3));
    if (slope1==slope2 & slope2==slope3 & slope3==slope1)
    {
        printf("The points fall on astraight line.");
    }
    else
    {
        printf("The points don't fall on a straight line.");
    }

    // side1=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    // printf("%f",side1);
    // side2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    
    return 0;
}