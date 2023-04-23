#include <stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows: ");
	scanf("%d", &m);
	printf("Enter number of columns: ");
	scanf("%d", &n);
	int A[m][n];
	
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("Enter the element: %d, %d: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("The Elements are: \n");
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%d\t",A[i][j]);
		}
        printf("\n");
	}
	printf("\n");
}