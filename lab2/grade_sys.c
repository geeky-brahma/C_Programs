#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);
    if (marks>=90 & marks<=100)
    {
        printf("Congrats!! for securing 'O' grade");
    }
    else if (marks>=80 & marks<90)
    {
        printf("You have secured 'E' grade");
    }
    else if (marks>=70 & marks<80)
    {
        printf("You have secured 'A' grade");
    }
    else if (marks>=60 & marks<70)
    {
        printf("You have secured 'B' grade");
    }
    else if (marks>=50 & marks<60)
    {
        printf("You have secured 'C' grade");
    }
    else if (marks>=40 & marks<50)
    {
        printf("You have secured 'D' grade");
    }
    else if (marks<40)
    {
        printf("You have secured 'F' grade\nBetter Luck Next Time");
    }
    else
    {
        printf("Invalid Marks Entered!!!");
    }
    return 0;
}