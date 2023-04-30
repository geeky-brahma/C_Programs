Q3

#include <stdio.h>
int main()
{
	int m,n;
	printf("Enter The No. of Rows: ");
	scanf("%d",&m);
	printf("Enter The No. of Cols: ");
	scanf("%d",&n);
	int A[m][n];
	int count=m*n; //col*row
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("Element %d, %d: ",i,j);
			scanf("%d", &A[i][j]);
		}
		
	}
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (i==j || i+j==m-1)
			{
				printf("%d ", A[i][j]);
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
		
	}
	printf("\n");
		
}