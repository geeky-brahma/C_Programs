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


    // To find the max element
    int max=A[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] > max)
            {
                max=A[i][j];
            }
        }
        
    }
    
    // Displaying the max element
    printf("The max element: %d", max);

    return 0;
}