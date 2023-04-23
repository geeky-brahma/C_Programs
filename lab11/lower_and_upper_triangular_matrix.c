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

    // Check for Upper Triangular Matrix
    int flag=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>j && A[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
        
    }
    if (flag==0)
    {
        printf("The matrix is a Upper Triangular matrix. \n");
    }
    else
    {
        printf("The Matrix is not a Upper Triangular matrix.\n");
    }
    

    // Check for Lower Triangular Matrix
    flag=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>i && A[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
        
    }
    if (flag==0)
    {
        printf("The matrix is a Lower Triangular matrix. \n");
    }
    else
    {
        printf("The Matrix is not a Lower Triangular matrix.\n");
    }

    return 0;
}