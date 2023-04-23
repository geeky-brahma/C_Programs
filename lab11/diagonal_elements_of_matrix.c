#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    int A[m][n];

    // User Input of Array
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("Enter The Element: %d, %d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    // Finding the diagonal elements
    int sum=0;
    printf("The Diagonal elements are: \n");
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
            {
                printf("%d ", A[i][j]);
                sum+=A[i][j];
            }
        }
    }
    printf("\nThe Sum of Diagonal Elements is: %d", sum);

    return 0;
}