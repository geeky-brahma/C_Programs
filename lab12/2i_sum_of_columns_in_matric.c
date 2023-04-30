// Q2i

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
			printf("%d\t",A[i][j]);
			
		}
		printf("\n");
		
	}
	
	printf("\n");
	
	// Adding The Column Elements and storing in another Array
	// Taking Cols in 1st loop and Rows in 2nd Loop 
	int sum=0,temp;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			sum+=A[j][i];
			temp=j;
		}
		B[temp+1][i]=sum;
		sum=0;
	}
	
	
	// Displaying The new matrix
	for (int i=0; i<m+1; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%d\t",B[i][j]);
			
		}
		printf("\n");
		
	}
		
}