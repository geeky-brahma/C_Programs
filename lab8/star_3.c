//    *
//   **
//  ***
// ****
//    *
//    **
//    ***
//    ****

#include <stdio.h>
int main()
{
    int row=4;
    for (int i=1; i<=row; i++)
    {
        for (int j =row-i; j>0; j--)
        {
            printf("  ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=2*row-2 ; j++)
        {
            printf(" ");

        }
        for(int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}