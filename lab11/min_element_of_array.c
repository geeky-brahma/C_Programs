#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    int A[m][n];


    // To Take user input of array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter The Element: %d,%d: ",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }


    // To find the min element
    int min=A[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] < min)
            {
                min=A[i][j];
            }
        }
        
    }
    
    // Displaying the max element
    printf("The min element: %d", min);

    return 0;
}