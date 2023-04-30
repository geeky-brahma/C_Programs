// Q2ii

#include <stdio.h>
int main()
{
	int m,n;
	printf("Enter The No. of Rows: ");
	scanf("%d",&m);
	printf("Enter The No. of Cols: ");
	scanf("%d",&n);
	int A[m][n];
	int B[m][n];
	
	
	// Taking User Input Of Array
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("Element %d, %d: ",i,j);
			scanf("%d", &A[i][j]);
			B[i][j]=A[i][j];
		}
		
	}
	
	// Displaying the Entered Array
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (i==0 || i==m-1)
			{
				printf("%d\t",A[i][j]);
			}
			else if (j==0 || j==n-1)
			{
				printf("%d\t",A[i][j]);
			}
			else
			{
				printf("\t");
			}
			
		}
		printf("\n");
		
	}
	
	
	
		
}