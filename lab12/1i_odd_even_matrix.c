// Q1i

#include <stdio.h>
int main()
{
	
	int r;
	printf("Enter No. of Elements: ");
	scanf("%d",&r);
	int A[r];
	for (int i=0; i<r; i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&A[i]);
	}
	for (int i=0; i<r; i++)
	{
		if(A[i]%2!=0)
		{
			printf("%d ",A[i]);
		}
	}
	for (int i=0; i<r; i++)
	{
		if(A[i]%2==0)
		{
			printf("%d ",A[i]);
		}
	}
	printf("\n");
}