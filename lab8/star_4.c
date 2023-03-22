#include <stdio.h>
int main()
{
    int row;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);
    for (int i = 1; i<=row; i++)
    {
        for (int j=row-i; j>0; j--)
        {
            printf("  ");

        }
        for (int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}