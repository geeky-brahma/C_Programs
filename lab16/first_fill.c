#include <stdio.h>

int main()
{
	int arr[20];
	
	for (int i=0; i<20; i++)
	{
		arr[i]=0;
	}
	for (int i=0; i<20; i=i+5)
	{
		arr[i]=1;
	}
	
	for (int i=0; i<20; i++)
	{
		printf("%d",arr[i]);
	}
	
	int entry;
	printf("\nEnter the number of entry: ");
	scanf("%d",&entry);
	
	for (int i=0; i<20; i++)
	{
		if (entry==0)
		{
			break;
		}
		if (arr[i]==0)
		{
			arr[i]=1;
			entry--;
		}
	}
	
	for (int i=0; i<20; i++)
	{
		printf("%d",arr[i]);
	}	
	
	printf("\n");
	return 0;
}