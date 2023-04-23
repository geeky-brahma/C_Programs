#include <stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows: ");
	scanf("%d", &m);
	printf("Enter number of columns: ");
	scanf("%d", &n);
	int A[m][n];
	int B[m][n];	
	int C[m][n];
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("Enter the element: %d, %d for matrix A: ", i,j);
			scanf("%d", &A[i][j]);
			printf("Enter the element: %d, %d for matrix B: ", i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%d\t", C[i][j]);
			
			
		}
        printf("\n");
	}
	
	printf("\n");
}




// #include<stdio.h>
// int main()
// {
//     int m,n,sum=0;
    
//     printf("Enter ROW value: ");
//     scanf("%d",&m);
//     printf("Enter COLUMN value: ");
//     scanf("%d",&n);

//     int array[m][n], array1[m][n];

//     // Matrix 1 Input
//     for(int a=0;a<m;a++)
//     {
//         for(int b=0;b<n;b++)
//         {
//             printf("Enter the value for Matrix 1: ");
//             scanf("%d",&array[a][b]);
//         }
//     }  

//     // Matrix 1 Output
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d ",array[i][j]);            
//         }
//         printf("\n");
//     }

//     // Matrix 2 Input
//     for(int a=0;a<m;a++)
//     {
//         for(int b=0;b<n;b++)
//         {
//             printf("Enter the value for Matrix 2: ");
//             scanf("%d",&array1[a][b]);
//         }
//     }   

//     // Matrix 2 Output
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d ",array1[i][j]);            
//         }
//         printf("\n");
//     }
//     printf("\n");

//     int sum_matrix[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             sum_matrix[i][j]=array[i][j]+array1[i][j];
//             printf("%d ",sum_matrix[i][j]);
//         }
//         printf("\n");
        
//     }
    
// }