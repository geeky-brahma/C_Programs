// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *


#include <stdio.h>
int main()
{
    int row;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);
    for(int i=row; i>0; i--)
    {
          
        for(int j=i; j>0; j--)
        {
            printf("* ");
        }
        for(int k=0; k<row-i; k++)
        {
            printf("    ");
        }
        for (int l=i; l>0;l--)
        {
            printf("* ");
        }
        printf("\n");
            
    }
    
    for (int i = 2; i <= row; i++)
    {
        for (int j =1; j<=i; j++)
        {
            printf("* ");
        }
        for (int k=row-i; k>0; k--)
        {
            printf("    ");
        }
        for(int l=1; l<=i; l++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}